// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.
// Input:arr1=[1,2,3] arr2=[4,5,6]
// Output:arr=[1,2,3,4,5,6]
// Input:arr1=[1,3,5] arr2=[2,4,6]
// Output:arr=[1,2,3,4,5,6]
#include <iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b){
    int c;
    c=a;
    a=b;
    b=c;
    return;
}

int main()
{
    vector<int> arr1={1 ,2 , 3};
    vector<int> arr2={4 ,5 , 6};

    int m=arr1.size();
    int n=arr2.size();
    vector<int> ans;

    //adding elements
    for (int i=0 ; i<m ; i++) ans.push_back(arr1[i]);
    for (int i=0 ; i<m ; i++) ans.push_back(arr2[i]);

    //sorting ans
    for (int i=0 ; i<m+n ; i++){
        for (int j=0 ; j<m+n-1 ; j++){
            if (ans[j]>ans[j+1]) swap(ans[j] , ans[j+1]);
        }
    }
    //printing ans
    for (int element :ans){
        cout<<element<<" ";
    }

}