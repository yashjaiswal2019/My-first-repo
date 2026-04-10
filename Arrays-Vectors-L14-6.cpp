#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[]={1 , 2, 3, 4, 5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"by what steps array should be rotated ?"<<endl;
    cin>>k;

    k=k%size;       //gives index of from which we have to rotate array

    int j=0;

    int ansArray[size];

    //inserting last k elements in ansArray.
    for (int i=size-k ; i<size ; i++){
        ansArray[j]=arr[i];
        j++;
    }

    for (int m=0 ; m<size-k ; m++){
        ansArray[j]=arr[m];
        j++;
    }


    for(int i =0 ; i<size ; i++){
        cout<<ansArray[i]<<" ";
    }
    
}