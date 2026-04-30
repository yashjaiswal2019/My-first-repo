#include <iostream>
using namespace std;

void merge(int *arr , int Aleft , int Aright , int Bleft , int Bright);

void mergeSort(int *arr , int left , int right); 

int main()
{
    int arr[] = {7 , 5, 3, 2, 4, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr , 0 , size-1);

    // printing the sorted array through the merge Sort Algorithm
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void merge(int *arr , int Aleft , int Aright , int Bleft , int Bright){
    int Asize = Aright - Aleft + 1;
    int Bsize = Bright - Bleft + 1;

    // making temp arrays a and b.
    int a[Asize];
    int b[Bsize];

    for (int i = 0 ; i < Asize ; i++) a[i] = arr[Aleft + i];
    for (int i = 0 ; i < Bsize ; i++) b[i] = arr[Bleft + i];

    // merging the arrays
    int i = 0 , j = 0 , k = Aleft;

    while (i < Asize and j < Bsize){
        if (a[i] < b[j]) arr[k++] = a[i++];
        else arr[k++] = b[j++];
    }

    // add the elements left after merging the array
    while (i < Asize) arr[k++] = a[i++];
    while (j < Bsize) arr[k++] = b[j++];

    return;
}

void mergeSort(int *arr , int left , int right){
    // merge sort --> recursively sort the subarrays and merge them into into one sorted array
    // base case 
    if (left == right) return;
    // self work and assumption
    int mid = (left + right) / 2;
    mergeSort(arr , left , mid);
    mergeSort(arr , mid + 1 , right);
    merge(arr , left , mid , mid + 1 , right);
    return;
}