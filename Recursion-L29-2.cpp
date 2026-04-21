// calculate the max value in a given array using recursion.

#include <iostream>
using namespace std;

void findMax(int *arr , int idx , int size , int *ptrMax);

int main()
{
    int arr[]={ 5};
    int size =sizeof(arr)/sizeof(arr[0]);
    int max=INT32_MIN;
    int *ptrMax=&max;

    cout<<max<<endl;

    findMax(arr , 0 , size , ptrMax);
    cout<<max<<endl;
}

void findMax(int *arr , int idx , int size , int *ptrMax){
    if (idx==size) return;

    if (arr[idx] > *ptrMax)  *ptrMax = arr[idx];
    findMax(arr , idx+1 , size , ptrMax);
}