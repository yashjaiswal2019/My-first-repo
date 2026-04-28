// practice Imnsertion Sort using for loop for j

#include <iostream>
using namespace std;

void insertionSort(int *arr , int size);

int main()
{
    int arr[] = {5, 6, 3, 4, 2, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr , size);
    // printing the sorted array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void insertionSort(int *arr , int size){
    // using for loop for insertion sort.

    for (int i = 1 ; i < size ; i++){
        int curr = arr[i];
        int idx = 0;
        for (int j = i-1 ; j >= 0 ; j--){
            if (arr[j] >= curr) arr[j+1] = arr[j];
            else {          // we will be pointing at our element lower than our curr element;
                idx = j;
                break;
            }
        }
        arr[idx] = curr;
    }
    return;
}

// this is wrong use of for loop in insertion sort Algorithm.