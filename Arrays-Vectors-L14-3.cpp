#include <iostream>
using namespace std;

int main()
{
    int arr[]={2, 3, 1, 3, 2, 4 , 4, 5, 1};
    int size=sizeof(arr)/sizeof(arr[0]);

    int ans=-1;

    for (int i=0 ; i<size ; i++){
        for (int j=i+1 ; j<size ; j++){
            if (arr[j]==arr[i]) break;
            else ans = arr[i];
        }
    }
    cout<<ans;
    return 0;
}