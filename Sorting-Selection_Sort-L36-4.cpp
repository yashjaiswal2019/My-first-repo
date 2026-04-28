// praticing selection sort algorithm

#include <iostream>
using namespace std;

void selectionSort(int *arr , int size);

int main()
{
    int arr[] = {6, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(int);

    selectionSort(arr , size);

    // printing the resulting array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void selectionSort(int *arr , int size){
    // select the minimum ele from unsorted arr and swap it with the end ele oof arr
    for (int i = 0 ; i < size-1 ; i++){
        int min_idx = i;

        for (int j = i ; j < size ; j++){
            if (arr[j] < arr[min_idx]) min_idx = j;
        }

        if (min_idx != i) swap(arr[min_idx] , arr[i]); 
    }
    return;
}