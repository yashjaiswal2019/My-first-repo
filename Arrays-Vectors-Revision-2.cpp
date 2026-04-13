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


    vector<int> ans;
    int i=0 , j=0;

    while (i<size1 && j<size2){         //using logicalAnd opertor gives us that this will compare till one array's elements are 
        if (arr1[i]<arr2[j]){           //compated and filled
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            if (arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                ans.push_back(arr2[j]);
                i++ , j++ ;
            }
            else {
                ans.push_back(arr2[j]);
                j++;
            }
        }
    }

    while (i<size1){
        ans.push_back(arr1[i]);
        i++;
    }
    while (j<size2){
        ans.push_back(arr2[j]);
        j++;
    }

    //printing the ans array
    for (int &ele:ans){
        cout<<ele<<" ";
    }

}