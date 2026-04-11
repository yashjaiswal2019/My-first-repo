// check that if we can partition an array into two sub array with equal sum
// if there exists an element from which prefix sum ==suffix sum
// number of elements in array can also be odd then the prefix==suffix sum

//  [a1 , a2,a3 , a4,| a5, a6 ]  -> | is the point wher prfix sum==suffix um

#include <iostream>
using namespace std;

bool belongsTo(int a , int b){
    if (a-b==0 || a-b==-1 || a-b==1) return true;
}

int main()
{
    int arr[]={1, 2, 3, 4, 5  , 8, 7};
    int size =sizeof(arr)/sizeof(arr[0]);

    bool possibility=false;

    //thinking of two pointer approach 
    //use prefix sum from left to right and where they become equal we return true
    //i will also try i i can return those indices whre they become equal

    int left_ptr=0;
    int right_ptr=size-1;

    int leftsum=0 , rightsum=0;

    while(!belongsTo(left_ptr , right_ptr)){  //think about equality later
        leftsum+=arr[left_ptr];
        rightsum+=arr[right_ptr];
        if (leftsum==rightsum) {
            possibility=true;
            break;
        }
        else {
            if (leftsum>rightsum){
                right_ptr--;
                rightsum+=arr[right_ptr];
            }
            else {
                left_ptr++;
                leftsum+=arr[left_ptr];
            }
        }
        if (arr[left_ptr]==arr[right_ptr]){         //thinking of if first and last element in array is equal
            left_ptr++;                             //like this [x , y, , .... , z , x] -> in this if we sums become equal loop breaks
            right_ptr--;
        }

    }
    cout<<possibility;
}

//this was first attempt got it wrong .