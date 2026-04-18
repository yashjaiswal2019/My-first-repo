#include <iostream>
using namespace std;

int main()
{
    int x = 19;
    float y=22.231;

    // create a pointer that stores the address of x
    int *ptr1 = &x;
    cout <<ptr1<<endl; 
    
    // create a ponter that can store address of y
    float *ptr2 = &y;
    cout<<ptr2<<endl;
}