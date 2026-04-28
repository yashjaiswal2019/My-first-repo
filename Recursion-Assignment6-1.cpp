// Q1 - Given an array arr of size N and a target value target The task is to find all the indices of the
// given target value in the array using recursion.

// Input: arr = {1, 2, 9, 2, 2, 9}, target = 2
// Output: 1 3 4


#include <iostream>
#include <vector>
using namespace std;

void target_indices(int *arr , int size , vector<int>& ans , int idx , int target);

int main()
{
    int arr[]= {1, 2, 9, 2, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 2;

    vector<int> indice ;
    target_indices(arr , size , indice , 0 , target);

    // printing the indice vector
    for (int &ele : indice){
        cout << ele << " ";
    }
    return 0;
}

void target_indices(int *arr , int size , vector<int>& ans , int idx , int target){
    // base case 
    if (idx == size) return;
    // self - work
    if (arr[idx] == target){
        ans.push_back(idx);
    }
    target_indices(arr , size , ans , idx+1 , target);
    return;
}