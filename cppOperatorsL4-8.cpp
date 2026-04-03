/*Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
Sample Input : 12345
Sample Output : 1+4=5       */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a 5 digit number ";
    cin>>num;

    int a=num/10000;

    int b=num/100; //removing first 3 digits
    b=num-b*100;
    b=b/10;     //removes last digit

    cout<<a+b;
}