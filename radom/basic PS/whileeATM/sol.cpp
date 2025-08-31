#include<bits/stdc++.h>
using namespace std;

int main(){
int amt;
int count2000=0,count500=0,count100=0;
cout<<"WELCOME TO TMC ATM"<<endl;
cout<<"Enter the money as much needed in the ATM"<<endl;
cin>>amt;

if(amt%100 != 0){
    cout<<"invalid amount"<<endl;
}

while( amt >= 2000 ){
    amt=amt-2000;
    count2000++;
}

while( amt >= 500){
    amt=amt-500;
    count500++;
}

while( amt >= 100){
    amt = amt-100;
    count100++;
}

cout<<"2000 notes : "<<count2000<<endl;
cout<<"500 notes : "<<count500<<endl;
cout<<"100 notes : "<<count100<<endl;
return 0;


}
