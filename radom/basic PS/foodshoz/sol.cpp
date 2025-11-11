#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++++++++++++++++    Welcome to Amma foods      ++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    cout<<"================================================================================================"<<endl;
    cout<<"====================================== MENU ===================================================="<<endl;
    cout<<"================================================================================================"<<endl;

    cout<<"1. Idli - 20rs/plate"<<endl;
    
    cout<<"2. Dosa - 30rs/plate"<<endl; 
    
    cout<<"3. Vada - 15rs/plate"<<endl;
    
    cout<<"4. Pongal - 25rs/plate"<<endl;
    
    cout<<"5. Coffee - 10rs/cup"<<endl;
    
    cout<<"6. Tea - 5rs/cup"<<endl;
    int total = 0;

    for(;;){
        int choice,quantity;
        cout<<"Enter your choice(1-6): ";
        cin>>choice;
        cout<<"Enter quantity: ";
        cin>>quantity;
        

        switch (choice){
            case 1:
                cout<<"You have ordered "<<quantity<<" plates of Idli. Total cost: "<<20*quantity<<"rs"<<endl;
                total += 20*quantity;
                break;
            case 2:
                cout<<"You have ordered "<<quantity<<" plates of Dosa. Total cost: "<<30*quantity<<"rs"<<endl;
                total += 30*quantity;
                break; 
            case 3:
                cout<<"You have ordered "<<quantity<<" plates of Vada. Total cost: "<<15*quantity<<"rs"<<endl;
                total += 15*quantity;
                break;
            case 4:
                cout<<"You have ordered "<<quantity<<" plates of Pongal. Total cost: "<<25 *quantity<<"rs"<<endl;
                total += 25*quantity;
                break;
            case 5:
                cout<<"You have ordered "<<quantity<<" cups of Coffee. Total cost: "<<10*quantity<<"rs"<<endl;
                total += 10*quantity;
                break;
            case 6:
                cout<<"You have ordered "<<quantity<<" cups of Tea. Total cost: "<<5*quantity<<"rs"<<endl;
                total  += 5*quantity;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
                continue;  
        }

        char contiune;
        cout<<"Do you want to order anything else? (y/n): ";
        cin>>contiune;
        if(contiune=='n' || contiune=='N'){
            cout<<"Thank you for visiting Amma foods. Have a great day!"<<endl;
            break;
        }
    }

    if(total >= 500 && total < 999){
        cout<<"You are eligible for a discount of 10%. Your final bill is: "<<total*0.9<<"rs"<<endl;
    }else if(total >= 1000){
        cout<<"You are eligible for a discount of 15%. Your final bill is: "<<total*0.85<<"rs"<<endl;   
    }else{
        cout<<"thank you for visting our restautant."<<total<<"rs"<<endl;
    }
}
