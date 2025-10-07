#include<bits/stdc++.h>

using namespace std;

struct Address{
    string city;
    string flat_name;
};

struct student{
    int RollNum;
    string name;
    int Year;

    Address adress;
};
int main(){

    student s1;

    s1.RollNum = 12;
    s1.name = "Ragav";
    s1.Year = 3;
    s1.adress.city = "salem";
    s1.adress.flat_name = "Anman";

    cout<<s1.RollNum<<endl;
    cout<<s1.name<<endl;
    cout<<s1.Year<<endl;
    cout<<s1.adress.city<<endl;
    cout<<s1.adress.flat_name<<endl;
    
}