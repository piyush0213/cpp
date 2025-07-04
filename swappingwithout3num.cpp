#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Swapping without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
