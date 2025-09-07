#include<bits/stdc++.h>

using namespace std;

void printNumTriangle(int n){

    for(int i=1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){

    printNumTriangle(10);
    return 0;
}