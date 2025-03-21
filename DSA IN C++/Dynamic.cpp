//Solving KnapSack Problem
//using Dynamic Method

# include <iostream>
using namespace std;

int Knapsack(int capacity, int weights[], int values[], int n) {
    int dp[capacity + 1] = {0};

    // Update dp array from right to left
    for (int i = 0; i < n; i++) {
        for (int j = capacity; j >= weights[i]; j--) {
            dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
        }
    }

    return dp[capacity];
}

int main() {
    // Define weights and values as normal arrays
    int weights[] = {2, 3, 4, 5};
    int values[] = {3, 4, 5, 6};
    int capacity = 5;  // Knapsack Capacity
    int n = sizeof(weights) / sizeof(weights[0]);

    cout << "Maximum value in the Knapsack: " 
         << Knapsack(capacity, weights, values, n) << endl;
    
    return 0;
}

