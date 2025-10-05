#include <bits/stdc++.h>
using namespace std;

void fn(int n) {
    if (n < 1) {
        return; // Base condition: stop when n < 1
    }
    fn(n - 1);     // Recursive call first (to reach 1)
    cout << n << " "; // Print after recursion (so it prints 1 to n)
}

int main() {
    int num;
    cout << "Enter the numbers to be printed: ";
    cin >> num;
    fn(num);
    return 0;
}
