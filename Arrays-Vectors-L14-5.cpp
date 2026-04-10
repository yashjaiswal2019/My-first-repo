#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={1 , 2, 3, 4, 5};

    cout<<"by what steps array should be rotated ?"<<endl;
    int k;
    cin>>k;

    int size=arr.size();

    //lets try rotating array for every k 
    for(int i=0 ; i<k ; i++){
        arr.insert(arr.begin() , arr[size-1]);
        arr.pop_back();
    }
    //printing array
    for(int element:arr){
        cout<<element<<" ";
    }
    
}