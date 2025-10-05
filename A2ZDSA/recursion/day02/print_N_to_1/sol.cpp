#include<bits/stdc++.h>

using namespace std;

void fn(int n){

    if( n < 1){
        return;
    }
    cout<<n<<" ";
    n--;
    fn(n);
}

int main(){
    int num;
    int i = 0;
    cout<<"Enter the numbers to be print:";
    cin>>num;
    fn(num);
    return 0;
}