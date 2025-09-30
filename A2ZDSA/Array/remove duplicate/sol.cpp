#include<bits/stdc++.h>

using namespace std;

int removeDuplicate(int arr[],int n){
    int i=0;

    for(int j=0; j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[] = {1,2,3,4,5,5,6,7};

    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr,n);
    cout<<"the elements in the new array are: "<<k<<" "<<endl;

    for(int q=0; q<k ; q++){
        cout<<arr[q]<<" ";
    }
    return 0;
}