// Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
// of unique pairs that exist in the array whose absolute sum is exactly x.

#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    int i=0 , j=size-1;
    int target;
    cin>>target;

    bool possibility=false;
    int pairs=0;

    while (i<j){
        if (arr[i]+arr[j]>target) j--;
        else {
            if (arr[i]+arr[j]==target){
                possibility=true;
                pairs++ , i++ , j--;
                continue;
            }
            else i++;
        }
    }
    cout<<possibility<<endl<<pairs<<endl;
}