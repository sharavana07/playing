#include<bits/stdc++.h>
//centered tri
using namespace std;

void center(int num){

    for (int i = 1; i <= num; i++) {
        // print spaces (or dots)
        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }
        // print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    
    center(5);
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
   
    center(n);
}
