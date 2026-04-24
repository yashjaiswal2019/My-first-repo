// Bubble Sort Algorithm

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& v);

int main()
{
    vector<int> arr = {20 , 50 , 40 , 10 , 30};
    bubbleSort(arr);

    // printing the elements
    for (int &ele : arr){
        cout << ele << " "; 
    }
    
}

void bubbleSort(vector<int>& v){
    int size = v.size();
    
    for (int i=0 ; i<size-1 ; i++){
        bool swapHappen = false;
        for (int j=0 ; j<size-1-i ; j++){
            if (v[j] > v[j+1]) {
                swap(v[j] , v[j+1]);
                swapHappen = true;
            }
        }
        if (swapHappen == false) break;
    }
    return ;
}