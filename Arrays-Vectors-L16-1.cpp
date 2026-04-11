//return the prefix sum without creating a new array

//my Answer
#include <iostream>
using namespace std;

int main()
{
    int arr[]= {5, 4, 1, 2, 3, 6, 9};
    int size=sizeof(arr)/sizeof(arr[0]);

    for (int i=1 ; i<size ; i++ ){
        arr[i]=arr[i]+arr[i-1];
    }
    //printing array
    for (int ele:arr){          //Hmm can i create a fibonacci series from taking a number input n
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}