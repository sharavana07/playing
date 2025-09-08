#include<bits/stdc++.h>
using namespace std;

void invertedTri(int n){
    for(int i = 0 ; i <= n ; i++){
         for ( int j = 0 ; j < n-i+1 ; j++){
            cout<<"*";
         }
         cout<<endl;
    }
}

int main (){

    invertedTri(5);
    return 0;
    
}