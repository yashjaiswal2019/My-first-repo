/*Write a program to calculate the sum of digits of a 3 digit number.
Sample Input : 123
Sample Output : 6       */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"three digit number = ";
    cin>>num;

    int d1 , d2 , d3;

    d1=num/100;
    d2=(num-d1*100)/10;
    d3=num-(d1*100+d2*10);

    cout<<d1+d2+d3;
}