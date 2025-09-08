#include<bits/stdc++.h>
//right based number tir
using namespace std;

void printNumTriangle(int n){

    for(int i=1; i <= n; i++){
        for(int j = n; j >= n - i+1 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){

    printNumTriangle(10);
    return 0;
}