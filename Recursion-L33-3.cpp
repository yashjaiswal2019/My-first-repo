// print the sum of all possible subsets of a given array

#include <iostream>
using namespace std;

int printSumSubset(int *arr , int idx , int size);

int main()
{
    int arr[]={1 , 2 , 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printSumSubset(arr , 0 , size);
}

int printSumSubset(int *arr , int idx , int size){
    // base case
    if (idx==size){
        cout<<"0"<<endl;
        return 0;
    }
    // assumption
    cout << arr[idx] + printSumSubset(arr , idx+1 , size) << " ";
    cout << printSumSubset(arr , idx+1 , size) << " ";
}

// this was second try also wrong