#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1 , 2 , 3, 4};

    int *ptr = &arr[0];
    cout<<*ptr<<endl;        // this will give value pointer is pointing at that is arr[0] which is equal to 1
    
    cout<<ptr<<endl;        // address of 0th idx element of Array arr
    cout<<arr<<endl;        // this will also point to zeroth index element in Array it has stored that address in it !!

    // now if it is a pointer lets try dereferencing it 
    cout<<*arr<<endl;       // indeed it gave us 1.

    // ---- now lets try using pointer arithematic to this ----
    cout<< *(arr + 0) << endl;
    cout<< *(arr + 1) <<endl;       // will give us element at first index in Array
    cout<< *(arr + 2) <<endl;       // will give us 2nd index element

    // now lets try using a loop for this 
    for (int i=0 ; i<4 ; i++){
        cout<<*(arr + i) << " ";
    } 
}