// print an Array using recursion

#include <iostream>
using namespace std;

void printarr(int *arr , int idx , int size);

int main()
{
    int arr[]={1 , 2, 3, 4 };

    int size = sizeof(arr)/sizeof(arr[0]);

    printarr(arr , 0 , size);
}

void printarr(int *arr , int idx , int size){
    if (idx==size) return ;
    cout<<arr[idx]<<endl;
    printarr(arr , idx+1 ,size);
}