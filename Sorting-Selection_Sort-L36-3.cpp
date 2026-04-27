// practicing selection sort algorithm.

#include <iostream>
using namespace std;

void selectionSort(int *arr , int size);

int main()
{
    int arr[] = {1 , 2, 5, 7, 9, 3, -23, 4, 5, 0, -87, -45, 24, 667, 25, 89 ,355, -1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr , size);

    // printing the resulting sorted array
    for (int &ele : arr){
        cout << ele << " ";
    }
}

void selectionSort(int *arr , int size){
    // selection sort Algorithm.
    for (int i = 0 ; i < size -1 ; i++){
        int min_idx=i;
        for (int j = i+1 ; j < size ; j++){
            if (arr[j] < arr[min_idx]) min_idx = j; 
        }

        // there can be a possibility that our min_idx and i are equal then in that case we do not need to swap
        if (min_idx != i) swap(arr[i] , arr[min_idx]);
    }
    return;
}