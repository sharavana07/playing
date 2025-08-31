#include<bits/stdc++.h>

using namespace std;

void numOfDays(int days){
    
    if(days >= 1 && days <= 5){
    cout << "₹" << days * 2 << " fine to be paid to the library!" << endl;
     }
    else if(days >= 6 && days <= 10){
    cout << "₹" << days * 3 << " fine to be paid to the library!" << endl;
     }
    else if(days >= 11 && days <= 30){
    cout << "₹" << days * 5 << " fine to be paid to the library!" << endl;
     }
    else{
    cout << "Membership Cancelled!" << endl;
     }

}

int main(){
    cout<<"#########################################################################################################";
    cout<<"############################ THE OUR KNOWLEAGE LIBARY PvT ###############################################";
    cout<<"#########################################################################################################";

    int days;
    cout<<"Enter the number of days you rented the book: "<<endl;
    cin>>days;

    numOfDays(days);
}