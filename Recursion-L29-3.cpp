// find the sum of the values of given array using recursion

#include <iostream>
using namespace std;

int arraySum(int *arr , int idx , int size);

int main()
{
    int arr[]={1 , 3, 4, 5, 8, 0, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = arraySum(arr , 0 , size);
    cout<<sum<<endl;
}

int arraySum(int *arr , int idx , int size){
    // base case 
    if (idx == size) return 0;
    // selfwork and assumption
    return arr[idx] + arraySum(arr , idx+1 , size);
}