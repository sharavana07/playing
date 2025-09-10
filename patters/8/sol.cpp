#include <bits/stdc++.h>
using namespace std;

void invertedCenTri(int n) {
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << "*";
        }
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    invertedCenTri(4);
    return 0;
}
