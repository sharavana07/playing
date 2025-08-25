// calculator in CPP sing swtich case
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Ehter the Values for the A and B : ";
    cin >> a >> b;
    char oper;
    cout << "Enter the Operator (%,^,*,+,/,-): ";
    cin >> oper;
    switch (oper)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
        case '%':
        cout << a % b << endl;
        break;
        case '^':
        cout << pow(a, b) << endl;
        break;
        default:
        cout << "Invalid Operator" << endl;
        break;
    }
}