// given an astring array of fruits names sort them in lexicographically manner

#include <iostream>
using namespace std;

void lexoSort (string *arr , int size);

int main()
{
    string arr[] = {"apples" , "banana" , "kiwi" , "lichi" , "pineapple" , "papaya"};

    int size = arr->length();

    lexoSort (arr , size);
    
    // printing the sorted array
    for (string &ele : arr){
        cout << ele << "  ";
    }
}

void lexoSort (string *arr , int size){
    for (int i = 0 ; i < size -1 ; i++){
        int minIdx = i;
        for (int j = i+1 ; j < size ; j++){
            
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        if (minIdx != i) swap(arr[minIdx] , arr[i]);
    }
    return;
}