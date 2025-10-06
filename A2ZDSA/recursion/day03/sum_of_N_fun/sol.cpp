#include<bits/stdc++.h>

using namespace std;

void SumOfN(int i){
    if(i == 0){
        return;
    }
    return i + SumOfN(i-1);
}

int main(){
    int n;
    cout<<"Enter the Number of N to Perfrom summation: "<<endl;
    cin>>n;
    SumOfN(n);
    return 0;
}