#include <iostream>
using namespace std;

int main() {
    int r, c;

    // Input dimensions (same for both matrices)
    cout << "Enter number of rows and columns for the matrices: ";
    cin >> r ;
    cout << "and ";
    cin >> c;

    // Declare matrices
    int A[10][10], B[10][10], sum[10][10], diff[10][10];

    // Input matrix A
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix Addition: C = A + B
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Matrix Subtraction: D = A - B
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display Results
    cout << "\nResultant Matrix after Addition (A + B):\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nResultant Matrix after Subtraction (A - B):\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
