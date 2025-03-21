//TSP Problem solving using
//Brute Force Method

#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

// Function to calculate the total cost of a given tour
int totalCost(int pos, int cost[4][4], bool visited[4], int n, int count, int currentCost) {
    // If all cities have been visited, return to the starting city (city 0)
    if (count == n) {
        return currentCost + cost[pos][0];
    }

    int ans = INT_MAX;

    // Try to visit every unvisited city
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            ans = min(ans, totalCost(i, cost, visited, n, count + 1, currentCost + cost[pos][i]));
            visited[i] = false; // Backtrack
        }
    }
    return ans;
}

// Function to solve the TSP problem
int tsp(int cost[4][4]) {
    int n = 4; // Fixed for a 4x4 matrix
    bool visited[4] = {false}; // Array to track visited cities
    visited[0] = true; // Start from city 0
    return totalCost(0, cost, visited, n, 1, 0); // Start with city 0, 1 city visited, and current cost 0
}

int main() {
    // Sample cost matrix (4x4)
    int cost[4][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int res = tsp(cost); // Call the TSP function
    cout << "Minimum cost: " << res << endl; // Output the result

    return 0;
}

