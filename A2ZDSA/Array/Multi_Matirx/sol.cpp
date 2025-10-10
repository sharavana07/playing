#include<bits/stdc++.h>

using namespace std;

int main (){
    int r1, c1, r2, c2;

    // Input dimensions for first matrix
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    // Input dimensions for second matrix
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Matrix multiplication condition check
    if (c1 != r2) {
        cout << "Matrix multiplication not possible. (Columns of A != Rows of B)" << endl;
        return 0;
    }

    // Declare matrices
    int A[10][10], B[10][10], result[10][10];

    // Input matrix A
    cout << "Enter elements of first matrix (A):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
    cout << "Enter elements of second matrix (B):\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result matrix
    cout << "\nResultant Matrix (A x B):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}