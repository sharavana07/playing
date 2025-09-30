#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
using namespace std;

struct MenuItem {
    string name;
    int price;
    string unit;
};

struct OrderItem {
    int menuIndex;
    int quantity;
    int cost;
};

void displayHeader() {
    cout << "\n" << string(100, '=') << endl;
    cout << "==" << string(96, ' ') << "==" << endl;
    cout << "==" << string(35, ' ') << "Welcome to Amma Foods" << string(40, ' ') << "==" << endl;
    cout << "==" << string(96, ' ') << "==" << endl;
    cout << string(100, '=') << endl;
}

void displayMenu(const vector<MenuItem>& menu) {
    cout << "\n" << string(100, '=') << endl;
    cout << string(45, ' ') << "MENU" << string(51, ' ') << endl;
    cout << string(100, '=') << endl;
    
    for (size_t i = 0; i < menu.size(); i++) {
        cout << left << setw(3) << (i + 1) << ". " 
             << setw(20) << menu[i].name 
             << "- Rs." << setw(5) << menu[i].price 
             << "/" << menu[i].unit << endl;
    }
    cout << string(100, '=') << endl;
}

void displayOrderSummary(const vector<OrderItem>& orders, const vector<MenuItem>& menu) {
    cout << "\n" << string(100, '-') << endl;
    cout << "ORDER SUMMARY:" << endl;
    cout << string(100, '-') << endl;
    cout << left << setw(25) << "Item" << setw(15) << "Quantity" 
         << setw(20) << "Price/Unit" << "Subtotal" << endl;
    cout << string(100, '-') << endl;
    
    for (const auto& order : orders) {
        cout << left << setw(25) << menu[order.menuIndex].name
             << setw(15) << order.quantity
             << "Rs." << setw(17) << menu[order.menuIndex].price
             << "Rs." << order.cost << endl;
    }
    cout << string(100, '-') << endl;
}

int getValidInput(int min, int max, const string& prompt) {
    int input;
    while (true) {
        cout << prompt;
        cin >> input;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number." << endl;
        } else if (input < min || input > max) {
            cout << "Please enter a number between " << min << " and " << max << "." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return input;
        }
    }
}

char getYesNo(const string& prompt) {
    char input;
    while (true) {
        cout << prompt;
        cin >> input;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        input = tolower(input);
        if (input == 'y' || input == 'n') {
            return input;
        }
        cout << "Please enter 'y' or 'n'." << endl;
    }
}

void displayBill(int total, int discount, int finalBill) {
    cout << "\n" << string(100, '=') << endl;
    cout << string(45, ' ') << "BILL" << string(51, ' ') << endl;
    cout << string(100, '=') << endl;
    cout << right << setw(80) << "Subtotal: Rs." << total << endl;
    
    if (discount > 0) {
        cout << right << setw(80) << "Discount: -Rs." << discount << endl;
        cout << string(100, '-') << endl;
    }
    
    cout << right << setw(80) << "TOTAL: Rs." << finalBill << endl;
    cout << string(100, '=') << endl;
    
    if (discount > 0) {
        cout << "\nCongratulations! You saved Rs." << discount << " today!" << endl;
    }
    
    cout << "\nThank you for visiting Amma Foods. Have a great day!" << endl;
    cout << string(100, '=') << endl;
}

int main() {
    vector<MenuItem> menu = {
        {"Idli", 20, "plate"},
        {"Dosa", 30, "plate"},
        {"Vada", 15, "plate"},
        {"Pongal", 25, "plate"},
        {"Coffee", 10, "cup"},
        {"Tea", 5, "cup"}
    };
    
    vector<OrderItem> orders;
    int total = 0;
    
    displayHeader();
    displayMenu(menu);
    
    while (true) {
        int choice = getValidInput(1, menu.size(), 
            "\nEnter your choice (1-" + to_string(menu.size()) + "): ");
        
        int quantity = getValidInput(1, 100, "Enter quantity: ");
        
        int cost = menu[choice - 1].price * quantity;
        orders.push_back({choice - 1, quantity, cost});
        total += cost;
        
        cout << "\n✓ Added " << quantity << " " << menu[choice - 1].unit 
             << "(s) of " << menu[choice - 1].name 
             << " - Rs." << cost << endl;
        
        char continueOrder = getYesNo("\nDo you want to order anything else? (y/n): ");
        if (continueOrder == 'n') {
            break;
        }
    }
    
    displayOrderSummary(orders, menu);
    
    int discount = 0;
    int finalBill = total;
    
    if (total >= 1000) {
        discount = total * 0.15;
        finalBill = total * 0.85;
        cout << "\n🎉 You are eligible for a 15% discount!" << endl;
    } else if (total >= 500) {
        discount = total * 0.10;
        finalBill = total * 0.90;
        cout << "\n🎉 You are eligible for a 10% discount!" << endl;
    }
    
    displayBill(total, discount, finalBill);
    
    return 0;
}