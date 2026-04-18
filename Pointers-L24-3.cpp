#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int *ptr;   // only declaring the pointer 

    cout<<ptr<<endl;
    cout<<*ptr<<endl;       // this will give the actual valuse stored at the address the pointer is pointing at
    cout<<int(ptr)<<endl;       // this thing just converts the hexadecimal to decimal form

    int marks=99;

    ptr = &marks;       // assigning the pointer adderss later.
    cout<<*ptr<<endl;

    // --------------------

    // lets update the value of marks now and see what happens
    marks=33;
    cout<<*ptr<<endl;   // ptr is still pointing to same bucket and the value there is updated

    // now lets update marks using pointer 
    *ptr=40;        // this tells ==> go to that adress in pointer and update it by this value
    cout<<*ptr<<endl;     // prints value present at adress that pointer is pointing at

    // lets store value using dereference
    int valueAtMarks= *ptr;     // stores in variable "valueAtMarks" the value present at address the pointer is pointing at. 
    cout<<valueAtMarks<<endl;
    
 
}