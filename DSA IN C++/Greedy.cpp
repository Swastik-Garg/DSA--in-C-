//Solving KnapSack Problem
//using Greedy Method

# include <iostream>
# include <algorithm>

using namespace std;

struct Item {
    int weight, value;
};

// Comparator function to sort items by value-to-weight ratio
bool Compare(Item a, Item b) {
    return (double)a.value / a.weight > (double)b.value / b.weight;
}

int main() {
    Item items[] = { {2, 3}, {3, 4}, {4, 5}, {5, 6} };
    int capacity = 5, n = 4;

    // Sorting items by value-to-weight ratio
    sort(items, items + n, Compare);

    double max_value = 0;

    for (int i = 0; i < n && capacity > 0; i++) {
        if (items[i].weight <= capacity) {
            max_value += items[i].value;
            capacity -= items[i].weight;
        } else {
            max_value += (double)items[i].value / items[i].weight * capacity;
            break;
        }
    }

    cout << "Maximum value in Knapsack = " << max_value << endl;

    return 0;
}

