//using vector rverse fn which is a built in fn in vector.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr={1 , 2, 3, 4, 5};

    int k;
    cout<<"by what steps array should be rotated ?"<<endl;
    cin>>k;

    k=k%arr.size();

    reverse(arr.begin() , arr.end());
    reverse(arr.begin() , arr.begin()+k);
    reverse(arr.begin()+k , arr.end());

    for (int element : arr){
        cout<<element<<" ";
    }
}