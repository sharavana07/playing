//arameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma

#include<bits/stdc++.h>

using namespace std;


void greet(string name){
    cout<<"Good day :-) \\*O*/ "<<name<<endl;
}

int main(){
    greet("Liam");
    
    greet("IOI");
    greet("ragav");
    greet("ram");
cout<<"Enter the name"<<endl;
string name1;
cin>>name1;
 greet(name1);
    return 0;
}
