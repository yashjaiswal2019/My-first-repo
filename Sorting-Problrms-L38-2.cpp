// givem an array move all zeroes at the and while mentaining the relative order of elements
// constraints --> do not use extra space

#include <iostream>
using namespace std;

void push0ToEnd(int *arr , int size);

int main()
{
    int arr[] = {3 , 0, 2, 0, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    push0ToEnd(arr , size);
    
    // printing the ans array
    for (int &ele : arr){
        cout << ele << " ";
    }
    return 0;
}

void push0ToEnd(int *arr , int size){
    // we need to have only O(n) time complexity now but how ??
    for (int i = 0 ; i < size ; i++){
    }
}

// couldn't solve it now.