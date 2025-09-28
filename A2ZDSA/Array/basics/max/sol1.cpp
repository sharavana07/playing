#include<bits/stdc++.h>

using namespace std;

int main() {

  int arr[9] = {
    1,
    2,
    3,
    4,
    9,//maximum
    6,
    7,
    8,
    0
  };

  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "The number of elements in the array is : " << n << endl;

  cout << "The array contains these elements: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i];

    if (i != n - 1) {
      cout << ",";
    } else {
      cout << ".";
    }
  }
  cout << endl;
  int max = arr[0];
  for (int j = 0; j < n; j++) {
    if (max < arr[j]) {
      max = arr[j];
    }
  }

  cout << "The maxiumum of the array is : " << max;
  return 0;
}