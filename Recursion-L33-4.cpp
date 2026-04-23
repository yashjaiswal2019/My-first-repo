// print the sum of all possible subsets of a given array

#include <iostream>
#include <vector>
using namespace std;

void printSubsetSum(int *arr , int idx , int size , int sum , vector<int>& result);

int main()
{
    int arr[]={2, 4 , 5};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int sum=0;
    vector<int> result;
    printSubsetSum(arr , 0 , size , sum , result);

    //printing answer
    for (int &ele : result){
        cout<<ele<<" ";
    }
}

void printSubsetSum(int *arr , int idx , int size , int sum , vector<int>& result){
    // base case
    if (idx==size){
        result.push_back(sum);
        return;
    }
    // self-work
    printSubsetSum(arr , idx+1 , size , sum+arr[idx] , result);
    printSubsetSum(arr , idx+1 , size , sum , result);
    return;
}