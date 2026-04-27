// practice for wriing bubble sort algorithm
#include <iostream>
using namespace std;

void bubbleSort (int *arr , int size);

int main()
{
    int arr[] = {78, 3, 2, 8, 45, 3, 0, -12, 34, -58, 63, 10 , 98 , -35 , 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr , size);

    // printing the sorted array
    for (int &ele : arr){
        cout << ele << " ";
    }
}

void bubbleSort (int *arr , int size){
    // bubble-Sort Algorithm 
    for (int i = 0 ; i < size-1 ; i++){
        bool flag = false;
        for (int j=0 ; j < size-1-i ; j++){
            if (arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
    return;
}