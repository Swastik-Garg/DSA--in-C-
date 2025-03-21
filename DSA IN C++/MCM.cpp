#include <iostream>
#include <climits>
using namespace std;

// Function to find the minimum number of scalar multiplications
int MCM(int dims[], int n) {
    int dp[n][n];

    // Initialize the diagonal to 0 (single matrix case)
    for (int i = 0; i < n; ++i) {
        dp[i][i] = 0;
    }

    // Chain length from 2 to n
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; ++k) {
                int q = dp[i][k] + dp[k+1][j] + dims[i] * dims[k+1] * dims[j];
                dp[i][j] = min(dp[i][j], q);
            }
        }
    }

    return dp[0][n-1];
}

int main() {
    int dims[] = {10, 20, 30, 40};
    int n = sizeof(dims) / sizeof(dims[0]) - 1;

    cout << "Minimum number of multiplications: " << MCM(dims, n) << endl;
    
    return 0;
}

