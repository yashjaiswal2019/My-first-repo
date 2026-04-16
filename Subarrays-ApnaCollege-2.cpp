// Maximum subarray sum

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] ={3 , -4 , 5 , 4 , -1 , 7 , -8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxSum=INT32_MIN;

    int start_idx=0;
    int end_idx=0;

    for (int st=0 ; st<size ; st++){
        int currSum=0;
        for (int endpt=st ; endpt<size ; endpt++){
            currSum+=arr[endpt];
            
            if (currSum > maxSum){
                maxSum=currSum;
                start_idx=st;
                end_idx=endpt;
            }
        }
    }
    cout<<maxSum<<endl<<start_idx<<" , "<<end_idx<<endl;
}