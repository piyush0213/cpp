#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num%4==0 && num%100!=0 || num%400==0) {
        cout << "Leap year";
    } else {
        cout << "Not a leap year";
    }
    return 0;
}