#include<bits/stdc++.h>

using namespace std;

void intvertedNumTri(int n){
    for(int i = 0 ;  i <= n ; i++){
        for (int j = 0;  j<= n-i+1 ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    intvertedNumTri(5);
    return 0;
}