#include <iostream>
using namespace std;

int main() {
    int a, b, result = 0;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int x = abs(a), y = abs(b);
    while (y > 0) {
        if (y & 1) {
            result += x;
        }
        x <<= 1;
        y >>= 1;
    }

    if ((a < 0) ^ (b < 0))
        result = -result;

    cout << "Product = " << result << endl;
    return 0;
}
