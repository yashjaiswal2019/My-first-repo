// find element in given array using recursion

#include <iostream>
using namespace std;

bool find(int arr[] , int target , int idx , int size);

int main()
{
    int target=0;
    int arr[]={0};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<find(arr , target , 0 , size)<<endl;
}

bool find(int arr[] , int target , int idx , int size){
    // base case if we reach the end an
    if (idx == size) return false;
    // assumption
    if (arr[idx] == target) return true;
    else return find(arr , target , idx+1 , size);
}