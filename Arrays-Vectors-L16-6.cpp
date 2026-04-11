// we can do sum pre processing calculating the total sum in advance 
// will create the sum array and from that array 
// arr[end]-arr[start] -> answer the sum of elements in between

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={5 , 1, 2, 3, 4};
    int size=arr.size();
    //preprocessing
    vector<int> database();

    for (int i=1 ; i<size ; i++){
        arr[i]=arr[i]+arr[i-1];         //we are not considering data integrity for now
    }                                   //making changes in our origional iven array

    int q;
    cout<<"please enter number of querries : ";
    cin>>q;

    for (int i=0 ; i<q ; i++){
        int start , end;
        cout<<"starting = ";
        cin>>start;
        cout<<"ending = ";
        cin>>end;               //querries are of 1 indexing => q is at q-1 and p is at index p-1.

        if (start==1){
            cout<<arr[end-1]<<endl;
        }
        else {
            if (start==2){
                cout<<arr[end-1]-arr[0];
            }
            else {
                cout<<arr[end-1]-arr[start-2]<<endl;  
            }
        }
    }
}

//thinking

//    1, 2, 3, 4,   5,   6
// => 1, 3 ,6, 10 , 15 , 21

// input like from 2 to 5 -> 15 at index =5-1 and 1 at index 2-1-1

// ==> start-2 because it is already behind by 1 and we have to include indices
// ==> end-1 
//answer will be  ==> arr[end-1]-arr[start-2]