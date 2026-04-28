// givem an array move all zeroes at the and while mentaining the relative order of elements
// constraints --> do not use extra space

#include <iostream>
using namespace std;

void push0toend(int *arr , int size);

int main()
{
    int arr[]= {3 , 0, 2, 0, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    push0toend(arr , size);

    // printing the sorted array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void push0toend(int *arr , int size){
    // lets use bubble sort
    for (int i = 0 ; i < size -1; i++){
        if (arr[i] == 0) {
            for (int j = i ; j < size -i; j++){
                if (arr[j+1] != 0) swap(arr[j] , arr[j+1]);
            }
        }
    }
    return;
}

// time complexity = O(n^2)
// space complexity = O(1).