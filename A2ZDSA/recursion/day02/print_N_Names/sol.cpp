#include<bits/stdc++.h>

using namespace std;

void fn(int n , int i){

    if(i >= n){
        return;
    }
    i++;
    cout<<"ragav ";
    fn(n,i);
}

int main(){
    int num;
    int i = 0;
    cout<<"Enter the number of time the name to be print:";
    cin>>num;
    fn(num , i );
    return 0;
}