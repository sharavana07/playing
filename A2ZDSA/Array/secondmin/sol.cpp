 #include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[8]={200,0,1,2,3,5,-9};
 
    int n = (sizeof(arr)/sizeof(arr[0]));

    cout<<"The size of the array is :"<<n<<endl;

       cout<<"The elements in the array is : ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i];
        if(i != n-1){
            cout<<",";
        }
    }

    int min=INT_MAX;
    int secmin=INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        else if(secmin > arr[i] && min < arr[i]){
            secmin = arr[i];
        }
    }

    cout<<"The minimum in the array is :"<<min<<endl;
    cout<<"The second minimum in the array is :"<<secmin;
    return 0;
}