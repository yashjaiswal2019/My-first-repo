#include <iostream>
using namespace std;

void bubbleSort(int *arr , int size);

int main()
{
    int arr[] = {3 , 7, 6, 2, 5, 1 , 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr , size);

    // printing the array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void bubbleSort(int *arr , int size){
    // merge sort --> repoeatedly swap adjacent elements until they are in right order.
    for (int i = 0 ; i < size - 1 ; i++){
        bool flag = false;
        for (int j = 0; j < size-1-i ; j++){
            if (arr[j] > arr[j+1]) {
                swap (arr[j] , arr[j+1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
    return;
}