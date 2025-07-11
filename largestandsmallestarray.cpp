#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Array ";
    cin >> n;
    int arr[n];
    cout << "Array elements ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "Max: " << largest << endl;
    cout << "Min: " << smallest << endl;
    return 0;
}
