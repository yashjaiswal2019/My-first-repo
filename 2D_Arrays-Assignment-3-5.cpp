// Q5 - Given an integer array arr, return an array ans such that ans[i] is equal to the product of
// all the elements of arr except arr[i].

// Input:arr=[1,3,5,7]
// Output:[105,35,21,15]
// Explanation:ans=[3*5*7,1*5*7,1*3*7,1*3*5]
// Input:[-5,-4,0,4,5]
// Output:[0,0,400,0,0]

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={1,3,5,7 , 0};

    // chiecking the product of whole array
    int product=1;
    for (int i=0 , n=arr.size() ; i<n ; i++){
        product*=arr[i];
    }

    // making ans array
    vector<int> ans;
    for (int i=0 , n=arr.size() ; i<n ; i++){
        ans.push_back(product/arr[i]);      // having this , it will fail if arr[i]==0
    }

    //printing 
    for (int& ele : ans){
        cout<<ele<<" , ";
    }
}


