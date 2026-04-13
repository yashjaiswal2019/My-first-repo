// - Given a vector arr[] sorted in increasing order. Return an array of squares of each
// number sorted in increasing order. Where size of vector 1<size<101.

#include <iostream>
using namespace std;

int absolutevalue(int x);

int main()
{
    int arr[]={-4 , -3, -1 , 0 , 2 };
    int size=sizeof(arr)/sizeof(arr[0]);

    // same two pointer approach two pointer check left and right if 
    // whoose absolute value if greater push it into the array end
    // because since array is arranged in increasing order the highest square is will be absolute value and highest value if array have negative 
    // will be at last and +ve max will be on right so we can compare them only

    // create ans array
    int ans[size];
    int i=0  , j=size-1;
    
    while (size>0){
        if (absolutevalue(arr[i])>=absolutevalue(arr[j])){
            ans[size-1]=arr[i]*arr[i];
            i++ , size--;
        }
        else {
            ans[size-1]=arr[j]*arr[j];
            j-- , size--;
        }
    }
    //printing the resulting array
    for (int &ele:ans){
        cout<<ele<<" ";
    }
    
}

int absolutevalue(int x){
    if (x<0) x*=-1;
    return x;
}