#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    
    for (int i=0 ; i<5 ; i++){
        cin>>arr[i];
    }

    int high=arr[0];
    int low=arr[0];

    for (int j=0 ; j<5 ; j++){
        if (high<arr[j]){
            high=arr[j];
        }
        else {
            if (low>arr[j]){
                low=arr[j];
            }
        }
    }
    cout<<high<<endl<<low<<endl;
}