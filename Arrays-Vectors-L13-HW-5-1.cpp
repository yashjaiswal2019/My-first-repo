#include <iostream>
using namespace std;

void swap(int &a , int &b);

int main()
{
    int arr[]={1, 3, 5, 32, 34, 56, 23, 5, 6, 3, 2, 9, 5 , 2 , 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    //using bubble sort Algorithm.
    for (int i=0 ; i<size ; i++){                //after k th pass last k elements will be sorted already.
        bool swapped = false;                       //do for innner loop iterate from 0 to size-k-1
        for (int j=0 ; j<size-i-1 ; j++){
            if (arr[j]>arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                swapped=true;
            }
            
        }
        if (swapped==false) break;
                                                
    }

    //printing array
    for(int element : arr ){
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
