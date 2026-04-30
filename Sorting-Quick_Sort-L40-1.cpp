#include <iostream>
using namespace std;

int pivot(int *arr , int first , int last);

void quickSort(int *arr , int first , int last);

int main()
{
    int arr[] = {20 , 12 , 35 , 16 , 18 , 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr , 0 , size -1);

    // printing the array sorted by Quick Sort Algorithm
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

int pivot(int *arr , int first , int last){
    int i = first - 1 , pivot = arr[last];

    for (int j = first ; j < last ; j++){
        if (arr[j] < pivot){
            i++;
            if (i != j) swap(arr[j] , arr[i]);
        }
    }
    // now our i will be pointing to the element from which on left  <pivot and on right >pivot
    swap (arr[i+1] , arr[last]);
    return i+1;
}

void quickSort(int *arr , int first , int last){
    // base case 
    if (first >= last) return;
    // self Work and Assumption

    int pIdx = pivot(arr , first , last);
    quickSort(arr , first , pIdx - 1);
    quickSort(arr , pIdx + 1 , last);
    return;
}