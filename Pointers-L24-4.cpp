#include <iostream>
using namespace std;

int main()
{
    int x, y;       // initialising the x , y
    cout<<"give inputs : ";
    cin>>x>>y;      // taking values from user
    
    int *ptrX=&x;   // find address of x and store it in ptrX
    int *ptrY=&y;   // find address of y and store it in ptrY

    int result;     //initialised result so result have garbage value

    int *ptr_result=&result;    // stores the address of integer result in ptr_result;

    // lets try to update the value at result using pointers
    *ptr_result = *ptrX + *ptrY ;   // changes value present at ptr_result with sum of values present at ptrX and ptrY respectively

    cout<<result<<endl;
    cout<<*ptr_result<<endl;
    cout<<x+y<<endl;
}

