#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int a[100][100];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int pd = 0; // primary diagonal sum
    int sd = 0; // secondary diagonal sum

    for (int i = 0; i < n; ++i) {
        pd += a[i][i];
        sd += a[i][n - i - 1];
    }

    cout << "Sum of primary diagonal: " << pd << endl;
    cout << "Sum of secondary diagonal: " << sd << endl;
    cout << "Total sum of both diagonals: ";
    if (n % 2 == 1) {
        // Subtract the middle element once if n is odd, as it is counted twice
        cout << pd + sd - a[n/2][n/2] << endl;
    } else {
        cout << pd + sd << endl;
    }

    return 0;
}
