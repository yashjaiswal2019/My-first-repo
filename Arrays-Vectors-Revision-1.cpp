// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1={1, 2, 3};
    vector<int> arr2={4, 5, 6};

    int size1=arr1.size();
    int size2=arr2.size();
    

    //we will use two pointers and judge the nth element thich is small and push it back in ans array vactor
    vector<int> ans;

    for (int i=0 , j=0; i<size1 || j<size2 ; ){
        
        if (i==size1-1){
            ans.push_back(arr2[j]);
            j++;
            continue;
        }
        if (j==size2-1){
            ans.push_back(arr1[i]);
            i++;
            continue;
        }

        if (arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            if (arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                ans.push_back(arr2[j]);
                i++ , j++;
            }
            else {
                ans.push_back(arr2[j]);
                j++;
            }
        }
    }
    //printing array
    for(int &ele:ans){
        cout<<ele<<" ";
    }

}

//as always got it wrong