#include <iostream>
using namespace std;

struct Product {
    int id;
    string name;
    float price;
    float discount;

    float getFinalPrice() {
        return price - (price * discount / 100);
    }
};

int main() {
    Product p1 = {101, "Laptop", 50000, 10};
    cout << "Final Price: " << p1.getFinalPrice();
}


