#include<bits/stdc++.h>
using namespace std;
//to print the stars in revese order
int main(){
    int rows ;
    cout<<"Enter the number of the number rows to be printed in the reversed triangle :"<<endl;
    cin>>rows;

    for(int i = rows; i >= 0; i--){
        for(int j = 1; j <= i; j++){
            cout<<"OOO";
        }


        cout<<endl;
    }
    return 0;
}