#include <iostream>
using namespace std;

int main()
{
    int arr[]={1 , 2};

    int *ptr = &arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<(ptr+1)<<" "<<*(ptr+1)<<endl;     //  we are able to access the next element of arr

    // *ptr++     we think it will increment first then dereference it but there are no brackets so 
    //            what will happen is it will dereference the ptr first and after that it will update ptr 
    //            and now our ptr will be pointing at 2 insted of 1.

    cout<<*ptr++<<endl;     // first dereference the ptr and print it then increment the ptr not the value ptr pointing at
    cout<<*ptr++<<endl;     // now out ptr is pointing at 2 in our array
}