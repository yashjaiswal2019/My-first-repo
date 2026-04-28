// Q2 - Given an array of integers, print a sum triangle using recursion from it such that the first
// level has all array elements. After that, at each level the number of elements is one less than the
// previous level and elements at the level will be the Sum of consecutive two elements in the
// previous level.

// Sample Input: [5,4,3,2,1]
// Sample Output:
// 5, 4, 3, 2, 1
// 9, 7, 5, 3
// 16, 12, 8
// 28, 20
// 48

#include <iostream>
#include <vector>
using namespace std;

void printsumTriangle(int *arr ,int idx , int size);

int main()
{
    int arr[] ={5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printsumTriangle(arr , size);
}

void printsumTriangle(int *arr ,int idx, int size){
    // base case 
    if ()
}