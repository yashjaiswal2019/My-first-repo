// lets see the common mistakes people make while using pointers

#include <iostream>
using namespace std;

int main()
{
    int x=9;
    int y=7;

    int *ptr=&x;

    // ptr = 6;      ==> this is wrong ptr is integer pointing varibale it cannot store int

    // *ptr=&y;        ==> this is wrong as the address pointer is pointing at is of thpe integer so we cannot store an address there.

    cout<<"Address stored inside ptr : "<<ptr<<endl;
    cout<<"Address of ptr itsef : "<<&ptr<<endl;       // prints the addres of ptr variable not the address stored inside the ptr
}