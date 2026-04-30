#include <iostream>
using namespace std;

void insertionSort (int *arr ,  int size);

int main()
{
    int arr[] = {7 , 5, 6, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort (arr , size);

    // printing the sorted array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void insertionSort (int *arr ,  int size){
    // insertion sort Algorithm --> repeatedly insert the element from unsorted array into the sorted array
    for (int i = 1 ; i < size ; i++){
        int curr = arr[i];
        int j = i-1;
        while (j >= 0 and arr[j] > curr){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
    return ;
}