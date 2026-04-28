// insertion sort algorithm

#include <iostream>
using namespace std;

void insertionsort(int *arr , int size);

int main()
{
    int arr[] = { 4, 7, 6, 2, 3, 5, 1, 0};

    int size = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr , size);

    // printing the array after insertion sort
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void insertionsort(int *arr , int size){
    // repeadtedly insert elements from unsorted array to out sorted array
    for (int i = 1 ; i < size ; i++){
        // have to check our sorted array to place current element
        int curr = arr[i];
        int j = i-1; 
        while (j >= 0 and arr[j] > curr){       // have to add the condition so j doesn't go out of bound.
            arr[j+1] = arr[j];
            j--;
        }
        // now we  are pointing at the element less than curr element so we place out cuu next to it 
        arr[j+1] = curr;
    }
    return;
}