#include<bits/stdc++.h>

using namespace std;

void fn(int n , int i){

    if(i >= n){
        return;
    }
    cout<<i<<" ";
    i++;
    fn(n,i);
}

int main(){
    int num;
    int i = 0;
    cout<<"Enter the numbers to be print:";
    cin>>num;
    fn(num , i );
    return 0;
}