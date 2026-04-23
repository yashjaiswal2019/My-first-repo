// print the sum of all possible subsets of a given array

#include <iostream>
using namespace std;

int sumArr(int *arr , int a , int b);

void printSubsetSum(int *arr , int *i , int *j , int size);

void printSubsetSumI(int *arr , int *i , int *j , int size);

int main()
{
    int arr[] = {1, 2, 3, 4};
    int left=0 , right=0;
    
    int *i = &left , *j = &right;

    printSubsetSum(arr , i , j , 4);
    right-=1;
    printSubsetSumI(arr , i , j , 4);
}

int sumArr(int *arr , int a , int b){
    // base case
    if (a==b) return arr[a];
    // assumption 
    return arr[a] + sumArr(arr , a+1 , b);
}

void printSubsetSum(int *arr , int *i , int *j , int size){
    // base case 
    if (*j == size) return;
    // self-work
    cout<<sumArr(arr , *i , *j)<<" ";
    *j +=1;
    // assumption
    printSubsetSum(arr , i , j , size);
}

void printSubsetSumI(int *arr , int *i , int *j , int size){
    // base case 
    if (*i == size) return;
    // self-work
    cout<<sumArr(arr , *i , *j)<<" ";
    *i +=1;
    // assumption
    printSubsetSum(arr , i , j , size);
}

// this was my try it's very incorrect