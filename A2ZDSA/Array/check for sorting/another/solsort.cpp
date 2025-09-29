#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int arr[]={1,3,4,5,6};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    bool sorted = true ;
    for(int i = 1 ; i < n; i ++){
        if(arr[i] < arr[i-1]){
            sorted = false ;
            break;
        }
    }
    
    if(sorted == true){
    cout<<"The array is sorted";
    }
    else{
        cout<<"Unsorted";
    }
    return 0;
}