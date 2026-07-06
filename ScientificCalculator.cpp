//scientific calculator in cpp

// Scientific Calculator in C++

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double a, b;
    int n;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Factorial" << endl;
    cout << "8. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Answer = " << a + b;
        break;

    case 2:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Answer = " << a - b;
        break;

    case 3:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Answer = " << a * b;
        break;

    case 4:
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (b == 0)
            cout << "Division by zero is not possible.";
        else
            cout << "Answer = " << a / b;
        break;

    case 5:
        cout << "Enter base and power: ";
        cin >> a >> b;
        cout << "Answer = " << pow(a, b);
        break;

    case 6:
        cout << "Enter a number: ";
        cin >> a;

        if (a < 0)
            cout << "Square root of a negative number is not possible.";
        else
            cout << "Answer = " << sqrt(a);
        break;

    case 7:
    {
        cout << "Enter a positive integer: ";
        cin >> n;

        int fact = 1;

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }

        cout << "Answer = " << fact;
        break;
    }

    case 8:
        cout << "Exiting the program.";
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}