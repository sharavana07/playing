#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

// Constants for fine rates
const int RATE_TIER1 = 2;  // Days 1-5
const int RATE_TIER2 = 3;  // Days 6-10
const int RATE_TIER3 = 5;  // Days 11-30
const int MAX_DAYS = 30;

void displayHeader() {
    cout << "\n" << string(100, '=') << endl;
    cout << setw(65) << "THE OUR KNOWLEDGE LIBRARY PVT LTD" << endl;
    cout << setw(60) << "Library Fine Calculator" << endl;
    cout << string(100, '=') << "\n" << endl;
}

void displayFineStructure() {
    cout << "Fine Structure:" << endl;
    cout << "  • Days 1-5:   ₹" << RATE_TIER1 << " per day" << endl;
    cout << "  • Days 6-10:  ₹" << RATE_TIER2 << " per day" << endl;
    cout << "  • Days 11-30: ₹" << RATE_TIER3 << " per day" << endl;
    cout << "  • Over 30 days: Membership will be cancelled" << endl;
    cout << string(100, '-') << "\n" << endl;
}

int calculateFine(int days) {
    if (days >= 1 && days <= 5) {
        return days * RATE_TIER1;
    } else if (days >= 6 && days <= 10) {
        return days * RATE_TIER2;
    } else if (days >= 11 && days <= MAX_DAYS) {
        return days * RATE_TIER3;
    }
    return -1; // Indicates membership cancellation
}

void displayFineResult(int days) {
    if (days <= 0) {
        cout << "\n⚠️  Invalid input! Please enter a positive number of days." << endl;
        return;
    }

    int fine = calculateFine(days);
    
    cout << "\n" << string(100, '-') << endl;
    cout << "Days overdue: " << days << endl;
    
    if (fine == -1) {
        cout << "\n❌ MEMBERSHIP CANCELLED!" << endl;
        cout << "Your book was overdue for more than " << MAX_DAYS << " days." << endl;
        cout << "Please contact the library administration for further details." << endl;
    } else {
        cout << "Fine amount: ₹" << fine << endl;
        cout << "\n✓ Please pay the fine at the library counter." << endl;
    }
    cout << string(100, '-') << endl;
}

bool getValidInput(int& days) {
    cout << "Enter the number of days the book is overdue: ";
    
    if (!(cin >> days)) {
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "\n⚠️  Error: Please enter a valid number!" << endl;
        return false;
    }
    
    return true;
}

int main() {
    displayHeader();
    displayFineStructure();
    
    int days;
    
    // Input validation loop
    while (!getValidInput(days)) {
        cout << "\nPlease try again." << endl;
    }
    
    displayFineResult(days);
    
    cout << "\nThank you for using our library service!" << endl;
    
    return 0;
}