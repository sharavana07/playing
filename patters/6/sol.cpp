#include<bits/stdc++.h>

using namespace std;

void invertedLeftTri(int n ){
    for(int i = 1; i <= n ; i++){
        for(int j=1; j < n-i+1 ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){

    invertedLeftTri(10);
    return 0;
}