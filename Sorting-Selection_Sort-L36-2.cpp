// practicing selection sort algorithm
#include <iostream>
using namespace std;

void selectionSort(int *arr , int size);

int main(void){
    int arr[] = { 3, 4, 2, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr , size);

    // printing the sorted array by selection sort algorithm
    for (int &ele : arr){
        cout << ele << " ";
    } 
}

void selectionSort(int *arr , int size){
    // slection sort Algrithm --> select the minimum element form the unsorted array and place it at the beggining of array.
    for (int i = 0 ; i < size - 1 ; i++){
        int min_idx = i;
        for (int j = i+1 ; j < size ; j++){
            if (arr[j] < arr[min_idx]) min_idx = j;
        }

        if (min_idx != i) swap(arr[i] , arr[min_idx]);
    }
    return;
}