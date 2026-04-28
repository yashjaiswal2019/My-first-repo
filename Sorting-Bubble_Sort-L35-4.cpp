// practicing bubble sort Algorithm

#include <iostream>
using namespace std;

void bubbleSort (int *arr  , int size);

int main()
{
    int arr[]= {1 , 4, 5, 3, 2};

    int size = sizeof(arr) / sizeof(int);

    bubbleSort(arr , size);

    // priting the ans arr
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void bubbleSort (int *arr  , int size){
    // repeatedly swap elements until they are in right order.
    for (int i = 0 ; i < size-1 ; i++){
        bool flag = false;
        for (int j= 0 ; j < size-i-1 ; j++){
            if (arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
    return;
}