#include<bits/stdc++.h>

using namespace std;

void SwapNum(int &a ,int &b){
    int z;
    z=a;
    a=b;
    b=z;
}

int main (){
int firstNum,SecondNum;
cout<<"Enter the First num and second NUM";
cin>>firstNum>>SecondNum;
cout<<"The numbers of first and second num: "<<firstNum<<" "<<SecondNum<<endl;
SwapNum(firstNum,SecondNum);
cout<<"The Numbers of the first and second num: "<<firstNum<<" "<<SecondNum<<endl;
return 0;
}