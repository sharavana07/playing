#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;
    float discount;

public:
    // Constructor
    Product() : id(0), name(""), price(0.0), discount(0.0) {}

    // Function to accept product details from the user
    void inputProductDetails() {
        cout << "\nEnter Product ID: ";
        cin >> id;
        cin.ignore(); // To clear newline left in input buffer
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Product Price (INR): ";
        cin >> price;
        cout << "Enter Discount (%): ";
        cin >> discount;
    }

    // Business logic
    float getFinalPrice() const {
        return price - (price * discount / 100);
    }

    // Function to display product information
    void displayProductDetails() const {
        cout << fixed << setprecision(2);
        cout << "\n--------------------------------------------\n";
        cout << "Product ID      : " << id << '\n';
        cout << "Product Name    : " << name << '\n';
        cout << "Base Price      : " << price << " INR\n";
        cout << "Discount Applied: " << discount << "%\n";
        cout << "Final Price     : " << getFinalPrice() << " INR\n";
        cout << "--------------------------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    // Create array of Product objects
    Product* products = new Product[n];

    cout << "\n--- Enter Product Details ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nProduct " << i + 1 << ":\n";
        products[i].inputProductDetails();
    }

    cout << "\n--- Product Summary ---\n";
    for (int i = 0; i < n; ++i) {
        products[i].displayProductDetails();
    }

    delete[] products; // Clean up dynamically allocated memory

    cout << "\nThank you! Data processed successfully.\n";
    return 0;
}
