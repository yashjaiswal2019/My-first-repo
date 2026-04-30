#include <iostream>
using namespace std;

void selectionSort(int *arr , int size);

int main()
{
    int arr[] = {9 , 5, 7, 2, 3, 8, 1, 6,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr , size);
    // printing the array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void selectionSort(int *arr , int size){
    // selection sort --> repeatedly select minimum element from arr and place it at the beginning of the unsorted array
    for (int i = 0 ; i < size - 1 ; i++){
        int minIdx = i;
        for (int j = i ; j < size ; j++){
            if (arr[j] < arr[minIdx]) minIdx = j;
        }

        if (minIdx != i) swap (arr[i] , arr[minIdx]);
    }
    return;
}