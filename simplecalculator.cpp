#include<iostream>
using namespace std;
int main() {
    double x,y,result;
    char operation;
    cout<<"Enter the first number:";
    cin>>x;
    cout<<"Enter the second number:";
    cin>>y;
    cout<<"Choose an operation(+,-,*,/):";
    cin>>operation;
    switch(operation) {
        case '+':
            result=x+y;
            cout<<"Result:"<< result<<endl;
            break;
        case '-':
             result=x-y;
            cout<<"Result:"<< result<<endl;
            break;
        case '*':
             result=x*y;
            cout<<"Result:"<< result<<endl;
            break;
        case '/':
            if(y!=0) {
                result=x/y;
                cout<<"Result:"<<result<<endl;
            }
            else {
                cout<<"Division by zero is not allowed."<<endl;
            }
            break;
        default:
            cout<<"Error! Invalid operation."<<endl;
            break;
    }
    return 0;
}