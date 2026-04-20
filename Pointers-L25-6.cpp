#include <iostream>
using namespace std;

int main()
{
    int arr[]={19 , 23};

    int *ptr=&arr[0];
    
    cout<<*++ptr<<endl; // 23  --> now ptr is pointing at arr[1] instead
    cout<<arr[0]<<" "<<arr[1]<<endl;    // array is unaffected 
}