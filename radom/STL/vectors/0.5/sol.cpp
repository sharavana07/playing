#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // Insertion
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Accessing elements
    cout << "First: " << v.front() << endl;
    cout << "Last: " << v.back() << endl;

    // Iteration
    cout << "Elements: ";
    for (int x : v) cout << x << " ";

    // Size & Capacity
    cout << "\nSize: " << v.size();
    cout << "\nCapacity: " << v.capacity();
}
