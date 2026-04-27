#include <iostream>
using namespace std;

void selectionSort(int *arr , int size);

int main()
{
    int arr[] = {3, 1, 5, 4, 54, 98, -1, -200, 38, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr , size);

    // printing the sorted array
    for (int &ele : arr){
        cout << ele << " ";
    }
}

void selectionSort(int *arr , int size){
    // selection sort Algorithm
    for (int i = 0 ; i < size-1 ; i++ ){

        //finding minimum element in unsorted arrau
        int min_idx=i;
        for (int j = i+1 ; j < size ; j++){
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        
        // placing minimum element in the beginning
        if (min_idx != i) swap(arr[i] , arr[min_idx]);
    }
    return ;
}