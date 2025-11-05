#include<bits/stdc++.h>

using namespace std;

void revesecentertriangle(int n){

    for(int i = n ; i > 0 ; i--){

        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }




        // print stars
        
        cout << endl;
    }
}

int main (){
    revesecentertriangle(6);
    return 0;
}