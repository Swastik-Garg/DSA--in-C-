//C++ Program to 
//print Fibonacci series by
//providing upper and lower limit

#include <iostream>
using namespace std;

void printFibonacciInRange(int lower, int upper) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    // Print Fibonacci numbers in the range
    while (nextTerm <= upper) {
        if (nextTerm >= lower) {
            cout << nextTerm << " ";
        }
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}

int main() {
    int lower, upper;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;

    cout << "Fibonacci series in the range [" << lower << ", " << upper << "]: ";
    printFibonacciInRange(lower, upper);

    return 0;
}