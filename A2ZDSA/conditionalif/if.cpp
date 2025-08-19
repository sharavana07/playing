#include<bits/stdc++.h>
using namespace std;
int main() {
    int speed;
    char dtype;
    //N for normal and V for VIP and P for police
    cout<<"enter the speed: "<<endl;
    cin>>speed;
    cout<<"enter the driver type: "<<endl;
    cin>>dtype;
// Normal people fine 
    if (dtype == 'N' || dtype == 'n') {
        if (speed <= 60){
            cout << "No fine ";
        }
        else if (speed <= 80 && speed >= 61 ){
            cout << "Normal driver fine $500";
        }
        else if (speed <= 100 && speed >= 81){
            cout << "Normal driver fine $2000";
        }
        else if (speed <= 120 && speed >= 101){
            cout << "Normal driver fine $2000";
        }
        else if (speed >= 121){
            cout << "Normal driver fine $20000";
        }
        }
// VIP fine 
        else if (dtype == 'V' || dtype == 'v') {
        if (speed <= 60){
            cout << "No fine ";
        }
        else if (speed <= 80 && speed >= 61 ){
            cout << "Normal driver fine $200";
        }
        else if (speed <= 100 && speed >= 81){
            cout << "Normal driver fine $700";
        }
        else if (speed <= 120 && speed >= 101){
            cout << "Normal driver fine $1500";
        }
        else if (speed >= 121){
            cout << "Normal driver fine $8000";
        }
        }

        if (dtype == 'P' || dtype == 'p') {
        if (speed <= 60){
            cout << "No fine ";
        }
        else if (speed <= 80 && speed >= 61 ){
            cout << "Normal driver fine $50";
        }
        else if (speed <= 100 && speed >= 81){
            cout << "Normal driver fine $200";
        }
        else if (speed <= 120 && speed >= 101){
            cout << "Normal driver fine $200";
        }
        else if (speed >= 121){
            cout << "Normal driver fine $200";
        }
        }
}