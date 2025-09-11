#include<bits/stdc++.h>

using namespace std;

void Diamaond(int n){

    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j < n-i+1 ; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < i*2+1 ; k++){
            cout<<" *";
        }
        for(int j = 0 ; j < n-i+1 ; j++){
            cout<<" ";
        }  
        cout<<endl;      
    }
     for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << " *";
        }
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    Diamaond(10);
    return 0;
}