#include <iostream>
using namespace std;

int main() {
    char op;
    cout<<"Enter the operator: ";
    cin>>op;
    int operand1, operand2;
    cout<<"Enter two operands: ";
    cin>>operand1>>operand2;

    switch(op) {
        case '+': cout<<operand1 + operand2<<endl;
        break;
        case '-': cout<<operand1 - operand2<<endl;
        break;
        case '*': cout<<operand1 * operand2<<endl;
        break;
        default :cout << "Invalid operator!" << endl;  

    }
}