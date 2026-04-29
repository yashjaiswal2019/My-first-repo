// Merge sort Algorithm

#include <iostream>
using namespace std;

void mergeSort(int *arr , int left , int right);

void merge(int *arr , int Aleft , int Aright , int Bleft , int Bright);

int main()
{
    int arr[] = {10, 28, 24, 6, 34, 18, 38, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr , 0 , size-1);

    // printing the sorted Array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}


void merge(int *arr , int Aleft , int Aright , int Bleft , int Bright){
    int Asize = Aright - Aleft + 1;
    int Bsize = Bright - Bleft + 1;
    
    // creating the arrays a and b.
    int a[Asize];
    int b[Bsize];

    for (int i = 0 ; i < Asize ; i++) a[i] = arr[Aleft + i];
    for (int i = 0 ; i < Bsize ; i++) b[i] = arr[Bleft + i];

    // merging arrays
    int i = 0 , j = 0 , k = Aleft;

    while (i < Asize and j < Bsize){
        if (a[i] < b[j]) arr[k++] = a[i++];
        else arr[k++] = b[j++];
    }
    // putting in the elements left after one array is exhausted
    while (i < Asize) arr[k++] = a[i++];
    while (j < Bsize) arr[k++] = b[j++];
    return;
}


void mergeSort(int *arr , int left , int right){
    // this is a recursive fn that sorts the array
    // base case 
    if (left >= right) return;

    // self work
    int mid = (right+left) / 2;
    mergeSort(arr , left , mid);
    mergeSort(arr , mid+1 , right);

    merge(arr , left , mid , mid+1 , right);
    return;
}