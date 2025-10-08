#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s1 = {101, "Sharavana", 89.5};
    Student *ptr = &s1;

    cout << "Roll: " << ptr->roll << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}
