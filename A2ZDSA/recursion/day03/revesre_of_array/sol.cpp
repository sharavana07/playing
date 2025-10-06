#include<bits/stdc++.h>

using namespace std;

void arrayrevs(int arr[], int l , int r){
    if (l >= r){
        return;
    }
    swap(arr[l],arr[r]);
    arrayrevs(arr,l+1,r-1);
}
int main(){

    int arr[5]={1,2,4,5,6};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The size of the array:"<<n<<endl;
    cout<<"The array before revese: ";
    for(int i=0 ; i < n ; i++){
        cout<<arr[i];
        if(i != n-1){
            cout<<",";
        }
        else{
            cout<<"."<<endl;
        }
    }
     cout<<"The array after revese: ";
    arrayrevs(arr,0,n-1);
    for(int i=0 ; i < n ; i++){
        cout<<arr[i];
        if(i != n-1){
            cout<<",";
        }
        else{
            cout<<"."<<endl;
        }
    }
    return 0;
}