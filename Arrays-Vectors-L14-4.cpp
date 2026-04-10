#include <iostream>
#include <vector>
using namespace std;

int highest (int arr[] , int size);

int position(int arr[] , int size , int x);     //this position 

int secondHigh(int arr[] , int size);

int main()
{
    int arr[]={2 , 3, 5, 7, 7,  6, 1};
    int size=sizeof(arr)/sizeof(arr[0]);

    int high=highest(arr , size);
    // int highidx=position(arr , size , high);

    //changing every high to -1
    for (int i=0 ; i<size ; i++){
        if (arr[i]==high) arr[i]=-1;
    }
    // arr[highidx]=-1;

    

    // int secondHighidx=position(arr , size , highest(arr , size));

    cout<<highest(arr , size)<<endl;
    //printing array after above operation
    for(int element:arr){
        cout<<element<<" ";
    }
    cout<<endl;

    //using more optimized soln of second max
    cout<<secondHigh(arr , size)<<endl;
    

    //printing array after above operation
    for(int element:arr){
        cout<<element<<" ";
    }
    cout<<endl;
    
}


int position(int arr[] , int size , int x){
    int ans=0;
    for (int i=0 ; i<size ; i++){
        if (arr[i]==x) ans=i;
    }
    return ans;
}

int highest (int arr[] , int size){
    //fiding highest
    int max=arr[0];
    for (int i=1 ; i<size ; i++){
        if (arr[i]>max) max=arr[i];
    }
    return max;
}

int secondHigh(int arr[] , int size){
    int max=highest(arr , size);
    int secondMax=INT32_MIN;
    for (int i=0 ; i<size ; i++){
        if (arr[i]>secondMax && arr[i]!=max) secondMax=arr[i];
    }
    return secondMax;
}