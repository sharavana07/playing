#include<bits/stdc++.h>
using namespace std;

int main(){
    int amt;
    int count2000=0, count500=0, count100=0;
    
    // Header with border
    cout << "\n";
    cout << "╔════════════════════════════════════════╗" << endl;
    cout << "║        WELCOME TO TMC ATM             ║" << endl;
    cout << "║     Your Trusted Banking Partner      ║" << endl;
    cout << "╚════════════════════════════════════════╝" << endl;
    cout << "\n";
    
    // Input section
    cout << "┌────────────────────────────────────────┐" << endl;
    cout << "│  Please enter withdrawal amount:      │" << endl;
    cout << "│  (Amount must be multiple of ₹100)    │" << endl;
    cout << "└────────────────────────────────────────┘" << endl;
    cout << "\n₹ ";
    cin >> amt;
    cout << "\n";
    
    // Validation with better error handling
    if(amt <= 0){
        cout << "╔════════════════════════════════════════╗" << endl;
        cout << "║              ⚠ ERROR ⚠                ║" << endl;
        cout << "║   Amount must be greater than zero!   ║" << endl;
        cout << "╚════════════════════════════════════════╝" << endl;
        return 0;
    }
    
    if(amt % 100 != 0){
        cout << "╔════════════════════════════════════════╗" << endl;
        cout << "║              ⚠ ERROR ⚠                ║" << endl;
        cout << "║    Invalid amount! Please enter       ║" << endl;
        cout << "║    amount in multiples of ₹100        ║" << endl;
        cout << "╚════════════════════════════════════════╝" << endl;
        return 0;
    }
    
    // Store original amount for display
    int originalAmt = amt;
    
    // Calculate notes
    while(amt >= 2000){
        amt = amt - 2000;
        count2000++;
    }
    
    while(amt >= 500){
        amt = amt - 500;
        count500++;
    }
    
    while(amt >= 100){
        amt = amt - 100;
        count100++;
    }
    
    // Display results with enhanced formatting
    cout << "╔════════════════════════════════════════╗" << endl;
    cout << "║        TRANSACTION SUCCESSFUL ✓       ║" << endl;
    cout << "╚════════════════════════════════════════╝" << endl;
    cout << "\n";
    
    cout << "┌────────────────────────────────────────┐" << endl;
    cout << "│  Withdrawal Amount: ₹" << setw(16) << left << originalAmt << "│" << endl;
    cout << "├────────────────────────────────────────┤" << endl;
    cout << "│           DENOMINATION BREAKDOWN       │" << endl;
    cout << "├────────────────────────────────────────┤" << endl;
    
    int totalNotes = count2000 + count500 + count100;
    
    if(count2000 > 0){
        cout << "│  ₹2000 Notes  :  " << setw(2) << right << count2000 
             << " × ₹2000 = ₹" << setw(6) << left << (count2000*2000) << "  │" << endl;
    }
    if(count500 > 0){
        cout << "│  ₹500 Notes   :  " << setw(2) << right << count500 
             << " × ₹500  = ₹" << setw(6) << left << (count500*500) << "  │" << endl;
    }
    if(count100 > 0){
        cout << "│  ₹100 Notes   :  " << setw(2) << right << count100 
             << " × ₹100  = ₹" << setw(6) << left << (count100*100) << "  │" << endl;
    }
    
    cout << "├────────────────────────────────────────┤" << endl;
    cout << "│  Total Notes  :  " << setw(19) << left << totalNotes << "  │" << endl;
    cout << "└────────────────────────────────────────┘" << endl;
    cout << "\n";
    
    cout << "       Thank you for using TMC ATM!      " << endl;
    cout << "         Please collect your cash        " << endl;
    cout << "\n";
    
    return 0;
}