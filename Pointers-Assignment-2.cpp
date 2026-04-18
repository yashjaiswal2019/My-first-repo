// Q2 - Write a program to find the product of 2 numbers using pointers

#include <iostream>
using namespace std;

int main()
{
    int x , y;
    cout<<"give inputs X and Y : ";
    cin>>x>>y;

    int *ptrX=&x , *ptrY=&y;

    int product;

    int *ptr_product=&product;

    *ptr_product = *ptrX * *ptrY;

    cout<<product<<endl;

}