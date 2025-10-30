#include<bits/stdc++.h>
//to perform basic struct in cpp

using namespace std;

// this is where the students struct is initated 
// this struct collect and use and has the INT roll.no , STRING Name , FLOAT Marks 
struct students{

    int rollno;
    string name;
    float marks;
  };

  int main(){

    students s1;

    s1.rollno = 101;
    s1.name = "Sharavana" ;
    s1.marks = 95.3;

    cout<<"Roll . no : "<<s1.rollno<<endl;
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Marks : "<<s1.marks<<endl;
return 0;
  }
