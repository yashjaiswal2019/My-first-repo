#include <iostream>
using namespace std;

void process (int *arr , int n);

int main()
{
    int arr[]={1 , 2, 3, 4, 5};
    int n=5;
    process(arr , n);       // we hust passed the address of 0th index of array 


    cout<<endl;
    for (int i=0 ; i<n ; i++){      // actual value in array whill be changed as we did in process function
        cout<<arr[i]<<" ";
    }
}

void process (int *arr , int n){
    // inside this fn we have the same access as the main
    for (int i=0 ; i<n ; i++){
        cout<< *(arr + i) << " ";
    }

    *(arr + 2) = 99;
}