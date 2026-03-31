//this code takes two inputs and applies arithematic operations on them.
#include <iostream>
using namespace std;
int main()
{   
    float num1,num2,num3; //used float datatype for precision
    cout<<"value of first number : ";
    cin>>num1;

    cout<<"value of second number : ";
    cin>>num2;

    cout<<"sum of two numbers = "<<num1+num2<<endl;         //addition
    cout<<"difference of two numbers = "<<num1-num2<<endl;  //difference
    cout<<"num1/num2 = "<<num1/num2<<endl;
    cout<<"num2/num1 = "<<num2/num1<<endl;
    cout<<"product of two numbers = "<<num1*num2<<endl;     //multiplies two numbers

    //swapping numbers 
    num3=num1;
    num1=num2;
    num2=num3;

    cout<<"if numbers are swapped"<<endl<<"first number= "<<num1<<endl<<"second number = "<<num2;

    return 0;

}
