#include <iostream>
using namespace std;

int main(){

    double num1, num2, result;
    char op;

    cout << "Enter your First Number:";
    cin >> num1;
    cout << "Enter your Second Number:";
    cin >> num2;
    cout << "Enter your Operators (+, -, *, /):";
    cin >> op;

    switch(op){
        case '+':
        result = num1 + num2;
        cout << "Answer: " << num1 << " + " << num2 << " = " << result;
        break;
        case '-':
        result = num1 - num2;
        cout << "Answer: " << num1 << " - " << num2 << " = " << result;
        break;
        case '*':
        result = num1 * num2;
        cout << "Answer: " << num1 << " * " << num2 << " = " << result;
        break;
        case '/':
            if (num2 != 0){
                result = num1 / num2;
                cout << "Answer: " << num1 << " / " << num2 << " = " << result;
            } else if (num1 != 0) {
                result = num1 / num2;
                cout << "Answer: " << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Cannot divide by zero.";
            }
        break;
            default:
            cout << "Invalid Operator";
    }
    return 0;
}        