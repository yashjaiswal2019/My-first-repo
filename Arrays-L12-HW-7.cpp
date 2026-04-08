#include <iostream>
using namespace std;

int main()
{
    int arr[]= {1 , 6, 5, 7, 10, 8, 9};
    int size=7;

    int ans=0;

    

    //traverse inside loop for each element.

    for (int i=1 ; i<size-1 ; i++){

    bool leftok=true;
    bool rightok=true;
        //check left if less than current element.
        for (int j=0 ; j<i ; j++){
            if (arr[j]<arr[i]){
                leftok=true;
            }
            else{
                leftok=false;
                break;
            }
        }
        
        //check if right value is greater than current element
        for (int k=i+1 ; k<size ; k++){
            if (arr[k]>arr[i]){
                rightok=true;
            }
            else{
                rightok=false;
                break;
            }
        }
        if (leftok && rightok){
            cout<<arr[i];
            return 0;
        }
        
    }
    cout<<"no such value exists.";  
}