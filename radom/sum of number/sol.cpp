#include<bits/stdc++.h>

using namespace std;

void SumOfint(int n){
    int sumOfNum = 0 ;
    for(int i=1 ; i < n ; i++)
    {
        sumOfNum = sumOfNum + i ;
    }
    cout<<"the sum of number of N number : "<<sumOfNum<<endl;
}
int main (){
    SumOfint(10);
    return 0;
}