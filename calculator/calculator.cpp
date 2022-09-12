#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, this is a simple calculator made in C++" << endl
         << "Please enter the first number then the operation and then the second number" << endl
         << "Enter the first number please: ";
    double x{};
    string operation{};
    double y{};
    double result;
    cin >> x;
    cout << "Enter the operation e.g. +, -, *, /, % :";
    cin >> operation;
    cout << "Enter the second number please: ";
    cin >> y;
    if (operation == "+") {
        result = x + y;
        cout << "The result is: " << result;
    }
    else if (operation == "-") {
        result = x - y;
        cout << "The result is: " << result;
    }
    else if (operation == "*") {
        result = x * y;
        cout << "The result is: " << result;
    }
    else if (operation == "/") {
        result = x / y;
        cout << "The result is: " << result;
    }
    else if (operation == "%") {
        result = (x / 100) * y;
        cout << "The result is: " << result;
    }
    else {
        cout << "Sorry, you entered something wrong, please enter only the operations we provided.";
    }
    return 0;
}
