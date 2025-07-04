#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
