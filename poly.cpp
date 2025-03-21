#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor to initialize the number
    Number(int v) : value(v) {}

    // Overloading the + operator
    Number operator+(const Number& other) {
        return Number(value + other.value);
    }

    // Function to display the number
    void display() const {
        cout << value;
    }
};

int main() {
    Number num1(10), num2(20);

    // Using the overloaded + operator
    Number result = num1 + num2;

    cout << "The result is: ";
    result.display();
    cout << endl;

    return 0;
}