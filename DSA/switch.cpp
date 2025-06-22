#include<iostream>
using namespace std;

int main()
{
    int x, y;
    char op;

    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter the second number: ";
    cin >> y;

    cout << "Enter the arithmetic function you have to use (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << "The sum of the two integers is " << x + y;
            break;
        case '-':
            cout << "The subtraction of the two integers is " << x - y;
            break;
        case '*':
            cout << "The multiplication of the two integers is " << x * y;
            break;
        case '/':
            if (y != 0)  // Check for division by zero
                cout << "The division of the two integers is " << static_cast<double>(x) / y;
            else
                cout << "Error: Division by zero!";
            break;
        default:
            cout << "Invalid operator entered!";
            break;
    }

    return 0;
}