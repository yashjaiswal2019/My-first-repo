#include <iostream>
#include <vector>
using namespace std;

int arraysum(int arr[] , int size);

int main()
{
    int arr[]={6, 2, 4, 3, 1 , 8};
    int size=sizeof(arr)/sizeof(arr[0]);

    bool possibility=false;

    int position;             //trying to print the position where it satfies condition

    int totalsum=arraysum(arr , size);      //  prefixSum + suffixSum==totalSum -> suffixSum==totalSum-prefixsum;

    for (int i=0 ; i<size ; i++){
        if(arr[i]==totalsum/2){
            possibility=true;
            position =i;
            break;
        }
        else{
            if (i==size-1){
                arr[i]=arr[i]+arr[i-1];
            }
            else {
                arr[i+1]=arr[i+1]+arr[i];
            }
        }
    }
    cout<<possibility<<endl;

    //printing array
    for (int ele:arr){
        cout<<ele<<" ";
    }
    cout<<totalsum<<endl<<position<<endl;

    
}

int arraysum(int arr[] , int size){
    int total=0;
    for (int i=0 ; i<size ; i++){
        total+=arr[i];
    }
    return total;
}