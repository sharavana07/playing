#include <bits/stdc++.h>

using namespace std;

int main() {
   int arr[100];

   int n;

   cout << "Enter the number of elements you want in the array: " << endl;
   cin >> n;

   for (int i = 0; i < n; i++) {
      cout << "Enter the element for " << i
           << " th position in the Array: " << endl;
      cin >> arr[i];
   }

   for (int i = 0; i < n; i++) {
      cout << "The element for " << i
           << " th position in the Array is : " << arr[i] << endl;
   }

   int minVal = arr[0];

   for (int i = 0; i < n; i++) {
      if (arr[i] < minVal) {
         minVal = arr[i];
      }
   }
   cout << "The smallest value in the array is :" << minVal;

   return 0;
}