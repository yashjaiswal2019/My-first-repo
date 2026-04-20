#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr=arr + 4;  // store the address of value at 4th index of Array

    cout<<*ptr<<endl;
}