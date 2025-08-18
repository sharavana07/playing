#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) return binarySearch(arr, left, mid - 1, target);
        else return binarySearch(arr, mid + 1, right, target);
    }
    return -1; // Element not found
}
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int index = binarySearch(arr, 0, n - 1, target);
    if (index != -1) cout << "Element found at index: " << index;
    else cout << "Element not found";
    return 0;
}