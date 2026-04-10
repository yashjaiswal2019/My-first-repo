//learining how to write sorting algorithm
#include <iostream>
using namespace std;

void swap(int &a , int &b);

int main()
{
    int arr[]={1, 3, 5, 32, 34, 56, 23, 5, 6, 3, 2, 9, 5 , 2 , 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    //using selection sort algorithm
    for (int i=0 ; i<size ; i++){
        for (int j=i+1 ; j<size ; j++){
            if (arr[j]<arr[i]) swap(arr[j] , arr[i]);
        }
    }
    for(int element : arr){
        cout<<element<<" ";
    }

    
}



void swap(int &a , int &b){
    int c;
    c=a;
    a=b;
    b=c;
    return ;
}