#include<bits/stdc++.h>

using namespace std;

int countnum = 0;
void fn(){
    cout<<"count: "<< countnum <<endl;
    countnum++;
    fn();
}
int main(){
    fn();
    return 0;
}