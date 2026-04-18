// Q4 - Implement the swap function using pointers.
// lets implement this where we swap the pointers pointing at these given numbers and print using them

#include <iostream>
using namespace std;

void swap(int*& ptrA , int*& ptrB);

int main()
{
    int x , y;
    cout<<"Give inputs : ";
    cin>>x>>y;

    int *ptrX=&x , *ptrY=&y;

    cout<<"before Swap Function : "<<endl;
    cout<<"ptrX is pointing at : "<<ptrX<<" the value at this address if equal to "<<*ptrX<<endl;
    cout<<"ptrY is pointing at : "<<ptrY<<" the value at this address if equal to "<<*ptrY<<endl;

    swap(ptrX , ptrY);

    cout<<"After Swap Function : "<<endl;
    cout<<"ptrX is pointing at : "<<ptrX<<" the value at this address if equal to "<<*ptrX<<endl;
    cout<<"ptrY is pointing at : "<<ptrY<<" the value at this address if equal to "<<*ptrY<<endl;

    cout << *ptrX << " " << *ptrY << endl;
}

void swap(int*& ptrA , int*& ptrB){     // we whave to pass these pointers as pass by reference otherwise their copies will  
    int *temp=ptrA;                     // be made and swapped inside the fn and when fn ends the values vanish
    ptrA=ptrB;
    ptrB=temp;
}