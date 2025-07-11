#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Rows aur columns: ";
    cin >> r >> c;
    // Dynamic arrays banate hain
    int **a = new int*[r];
    int **b = new int*[r];
    int **sum = new int*[r];
    for(int i = 0; i < r; i++) {
        a[i] = new int[c];
        b[i] = new int[c];
        sum[i] = new int[c];
    }
    cout << "First matrix elements: ";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Second matrix elements: ";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }
    // Sum calculate karte hain
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "sum: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    // Memory free karte hain
    for(int i = 0; i < r; i++) {
        delete[] a[i];
        delete[] b[i];
        delete[] sum[i];
    }
    delete[] a;
    delete[] b;
    delete[] sum;
    return 0;
}
