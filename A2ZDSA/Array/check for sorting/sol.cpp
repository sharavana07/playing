#include<bits/stdc++.h>

using namespace std;


int main(){
int arr[10] = {1,2,4,5,6,7,8,90,8,100};

 int n = (sizeof(arr)/sizeof(arr[0]));

    cout<<"The size of the array is :"<<n<<endl;

    cout<<"The elements in the array is : ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i];
        if(i != n-1){
            cout<<",";
        }
    }

    for(int i = 1 ; i < n ; i++){

        if(arr[i] >= arr[i-1]){
            cout<<"this is sorted"<<endl;
        }
        else{
            cout<<"this is not sorted ";
            return false ;
        }
    }
    return 0;
}