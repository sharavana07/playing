#include<bits/stdc++.h>

using namespace std;

struct Medical{
    int MedID;
    string name;
    float price;
    float mg;
    // Data members
    }// types, *types
;
int main(){
    Medical m[4]={
        {101,"CoughTablet",20.1,10},
        
        {102,"fevertablet",5.9,5},
        
        {103,"PainKiller",8.9,10},
        
        {104,"Eyedrops",120,100},
    };
    int n = sizeof(m) / sizeof(m[0]);
for (int i = 0; i < n; i++) {
    cout << m[i].MedID << "\t" 
         << m[i].name << "\t" 
         << m[i].price << "\t" 
         << m[i].mg << endl;
}

    return 0;
}