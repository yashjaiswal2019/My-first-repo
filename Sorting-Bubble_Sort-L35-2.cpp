// writng bubble sort algorith 
#include <iostream>
using namespace std;

void bubbleSort(int *arr , int size);

int main()
{
    int arr[] = {3, 4, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr , size);

    for (int &ele : arr){
        cout << ele << " ";
    }
}

void bubbleSort(int *arr , int size){
    // bubble-sort Algorithm --> repeatedly swap elements if they are in wrong ordder
    for (int i = 0 ; i < size-1 ; i++){
        bool swapHappen = false;
        for (int j=0 ; j < size-1-i ; j++){
            if (arr[j] > arr[j+1]) {
                swapHappen = true;
                swap(arr[j] , arr[j+1]);
            }
        }
        if (swapHappen == false) break;
    }
    return;
    
}