#include<bits/stdc++.h>

using namespace std;

int main (){

    int arr[100];

    int n; 

    cout<<"Enter the number of elements in the arrays: "<<endl;
    cin>>n;

    for(int i = 0 ; i <= n ; i++ ){
        cout<<"Enter the elements "<<i<<"th element: "<<endl;
        cin >> arr[i];
    }

      for(int i = 0 ; i <= n ; i++ ){
        cout<<"Elements "<<arr[i]<<" element: "<<endl;
    }

    int maxVal = arr[0];

    for (int j = 0 ; j <= n ; j++){
        if(arr[j] > maxVal){
            maxVal = arr[j];
        }
    }

    cout<<"The maximum element in the array is : "<<maxVal<<endl;

    return 0;
}