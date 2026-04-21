// Void pointer

#include <iostream>
using namespace std;

int main()
{
    float x=3.256;
    void *ptr= &x;

    float *floatpointer = (float *)ptr;   // we are type casting ptr's stored address to an float* address 

    cout<<ptr<<" "<<*floatpointer<<endl;    // now we can dereference our floatponiter varibale's address

    cout<<*(float *)ptr<<endl;      // here we are dereferencing the ptr after cacting it to float* type first

    // wht if we cast ptr to int* instead
    cout<<*(int *)ptr<<endl;
}