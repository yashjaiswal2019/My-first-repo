/*Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.*/

#include <iostream>
using namespace std;

int main()
{
    char op;
    int num1 , num2;

    cout<<"enter two number:"<<endl;
    cin>>num1;
    cin>>num2;

    cout<<"enter the operator"<<endl;
    cin>>op;

    switch(op){

        case '+':
        cout<<num1+num2<<endl;
        break;

        case '-':
        cout<<num1-num2<<endl;
        break;
        
        case '*':
        cout<<num1*num2<<endl;
        break;
    
        case '/':
        cout<<num1/num2<<endl;
        break;
        
        case '%':
        cout<<num1%num2<<endl;
        break;
        
        default:
        cout<<"Please enter a valid operator.";

    }
}