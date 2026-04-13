// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose absolute difference is exactly x.

#include <iostream>
using namespace std;

int absolutevalue(int x);

int main()
{
    int arr[]={9,23,45,69,78};
    int size=sizeof(arr)/sizeof(arr[0]);

    // same two opointer approach one from left and one from right 
    // check difference of leftr pointer and right pointer 
    // if difference absolute value 
    // right - left > target -> right--
    // right - left  < target -> left++
    // reft-right == target ==> ans

    int target;
    cin>>target;
    
    int i=0 , j=size-1;
    bool possibility=false;

    while (i<j){
        if (absolutevalue(arr[j]-arr[i])>target) j--;
        else {
            if (absolutevalue(arr[i]-arr[j])==target){
                possibility=true;
                break;
            }
            else i++;
        }
    }
    cout<<possibility;
}

int absolutevalue(int x){
    if (x<0) x*=-1;
    return x;
}