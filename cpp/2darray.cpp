#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Rows kitni chahiye? ";
    cin >> rows;
    cout << "Columns kitni chahiye? ";
    cin >> cols;

    int arr[100][100]; // Max size 100x100, aap zarurat ke hisaab se badal sakte hain

    cout << "Array ke elements dijiye (row-wise):\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nAapka 2D array hai:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
} 