#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;
    if (num % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}