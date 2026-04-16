#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    int maxsum=INT32_MIN;
    int currsum=0;

    for (int i=0 ; i<size ; i++){
        currsum+=arr[i];
        maxsum=max(maxsum , currsum);
        if (currsum<0) currsum=0;
    }
    cout<<maxsum<<endl;
}