//TASK 2 SIMPLE CALCULATOR
#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    char op;
    
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << num1 << " " << op << " " << num2 << " = ";
    
    switch(op){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    
    return 0;
}



































