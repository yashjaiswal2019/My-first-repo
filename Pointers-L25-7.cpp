#include <iostream>
using namespace std;

int main()
{
    int arr[]={8 , 10};

    int *ptr=&arr[0];

    cout<<++*ptr<<endl;  // it will dereference first then increment the value ptr is pointing at then return that value 
    cout<<arr[0]<<" "<<arr[1]<<endl;    // our array's value will be updated
}