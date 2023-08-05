#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Cannot divide by zero!" << endl;
        return 0;
    }
}

int main() {
    cout << "Welcome to the Basic Calculator!" << endl;
    cout << "Available operations:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    int operation;
    double num1, num2;

    while (true) {
        cout << "Enter the operation number (1/2/3/4): ";
        cin >> operation;

        if (operation >= 1 && operation <= 4) {
            break;
        } else {
            cout << "Invalid choice. Please select a valid operation." << endl;
        }
    }

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;
    char operatorSymbol;

    switch (operation) {
        case 1:
            result = add(num1, num2);
            operatorSymbol = '+';
            break;
        case 2:
            result = subtract(num1, num2);
            operatorSymbol = '-';
            break;
        case 3:
            result = multiply(num1, num2);
            operatorSymbol = '*';
            break;
        case 4:
            result = divide(num1, num2);
            operatorSymbol = '/';
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }

    cout << num1 << " " << operatorSymbol << " " << num2 << " = " << result << endl;
    return 0;
}
