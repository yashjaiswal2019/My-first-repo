#include <iostream>
using namespace std;

int main()
{
    int arr[]={7 , 23};

    int *ptr=&arr[0];

    cout<<(*ptr)++<<endl;       // now we have binded it in parenthses so statement inside it will be executed first then increment
    //                             and we are doing post increment so value will return first then increment will happen
    cout<<*ptr<<endl;           // the value at that address will indeed be updated.
}