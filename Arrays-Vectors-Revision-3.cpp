// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose sum is exactly x.

#include <iostream>
using namespace std;

int main()
{
    int arr[]={1, 2, 3, 4, 5, 6 , 7,8 };
    int size=sizeof(arr)/sizeof(arr[0]);

    // I am thinking of two pointer approach one from left and one from right becaue array is arranged in increasing order
    // find sum left pointed element  and of right pointed element 
    // if sum is 
    // sum > target -> move right pointer toward left
    // sum < target -> meve left pointer toward right
    // sum==target -> fount ans break loop because we have to find only one ans

    int i=0 , j=size-1;
    int target;
    cin>>target;

    bool possibility=false;

    while(i<j){
        if (arr[i]+arr[j]<target) i++;
        else {
            if (arr[i]+arr[j]==target) {
                possibility=true;
                break;
            }
            else j--;           //because then arr[i]+arr[j]>target --> move right pointer toward left
        }
    }

    cout<<possibility;
}