//The void keyword, used in the previous examples, 
//indicates that the function should not return a value. 
//If you want the function to return a value, you can use a 
//data type (such as int, string, etc.) instead of void, and 
//use the return keyword inside the function.


#include<Bits/stdc++.h>
using namespace std;

int add(int a , int b){
    return a + b ;
}

int main(){
 
   cout<<add(10,12)<<endl;
    cout<<add(100,1002);

}
