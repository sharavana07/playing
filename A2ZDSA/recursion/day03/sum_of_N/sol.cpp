#include<bits/stdc++.h>

using namespace std;

void funtion1(int i , int sum){

    if(i < 1){
        cout<<"The Sum of n int is : "<<sum<<endl;
        return;
    }
    funtion1(i-1 , sum+i);
}

int main(){

    int n;
    cout<<"Enter the Number of ints to be added: "<<endl;
    cin>>n;
    funtion1(n,0);
    return 0;
}