







#include<bits/stdc++.h>

using namespace std;
//to print a left based trinangle

int main (){
    
    int n;

    cout<<"Enter the number of lines the star to be printed: "<<endl;
    cin>>n;

    for(int i=1; i <= n; i++){

        for(int j=1; j <= i; j++){

            for(int l=n-1; l <=0 ; l++ ){
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }


    return 0;
}