// practicing Merge Sort Algorithm
#include <iostream>
using namespace std;

void merge (int *arr , int Aleft , int Aright , int Bleft , int Bright);

void mergeSort(int *arr , int left , int right);

int main()
{
    int arr[] = {4 , 6, 3, 5, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr , 0 , size-1);

    // printing the sorted array
    for (int &ele : arr){
        cout << ele <<" ";
    }
    return 0;
}

void merge (int *arr , int Aleft , int Aright , int Bleft , int Bright){
    int Asize = Aright - Aleft + 1;
    int Bsize = Bright - Bleft + 1;

    // making the temp arrays
    int a[Asize];
    int b[Bsize];
    for (int i = 0 ; i < Asize ; i++) a[i] = arr[Aleft + i];
    for (int i = 0 ; i < Bsize ; i++) b[i] = arr[Bleft + i];
    
    //Merging the arrays
    int i = 0 , j = 0 , k = Aleft;

    while (i < Asize and j < Bsize){
        if (a[i] < b[j]) arr[k++] = a[i++];
        else arr[k++] = b[j++];
    }
    // filling in the elements left after merging 
    while (i < Asize) arr[k++] = a[i++];
    while (j < Bsize) arr[k++] = b[j++];
    
    return;
}

void mergeSort(int *arr , int left , int right){
    // base case
    if (left >= right) return;
    // Assumption
    int mid = (left + right) / 2;

    mergeSort(arr , left , mid);
    mergeSort(arr , mid+1 , right);
    // self - Work.
    merge(arr , left , mid , mid+1 , right);
    return;
}