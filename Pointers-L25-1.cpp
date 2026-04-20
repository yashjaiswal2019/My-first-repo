#include <iostream>
using namespace std;

void swap(int *x , int *y){     // we passed the copies of address stored in pointers of pX and pY 
    int temp=*x;                // and inside fn we are using dereferencing to go to that address we made copy of 
    *x=*y;                      // and then making the changes using pointers
    *y=temp;
}

int main()
{
    int x=10 , y=20;

    int *pX=&x , *pY=&y;
    swap(pX , pY);
    cout<<x<<" "<<y;
    return 0;
}