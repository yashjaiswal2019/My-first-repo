// Q3 - Write a function that returns the largest and the smallest number out of 3 given numbers.
// The main function should call this function to get the largest and smallest number and print
// the output.

#include <iostream>
using namespace std;

void maxAndMin (int& x , int& y , int& z);  // making the fn void as we will print the max and min because we can only return one vaue from fn

int main()
{
    int a , b , c;
    cout<<"Give inputs : ";
    cin>>a>>b>>c;

    maxAndMin(a , b , c);
    

}

void maxAndMin (int& x , int& y , int& z){
    // lets try doing this using pointers that we will not use variable names rather we will use pointers instead
    int *ptrX=&x , *ptrY=&y , *ptrZ=&z ;

    int max, min;
    int *ptrMax=&max , *ptrMin=&min;

    // now lets compare
    if (*ptrX > *ptrY){
        if (*ptrX > *ptrZ) *ptrMax = *ptrX;
        else *ptrMax = *ptrZ;

        if (*ptrY < *ptrZ) *ptrMin = *ptrY;
        else *ptrMin = *ptrZ;
    }
    else {
        if (*ptrY > *ptrZ) *ptrMax  = *ptrY;
        else *ptrMax = *ptrZ;

        if (*ptrX < *ptrZ) *ptrMin = *ptrX;
        else *ptrMin=*ptrZ;
    }

    cout<<max<<"  "<<min<<endl;

}