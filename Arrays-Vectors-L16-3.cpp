#include <iostream>
using namespace std;

int main()
{
    int arr[]={1, 2, 3, 4, 5  , 8, 7};
    int size =sizeof(arr)/sizeof(arr[0]);

    bool possibility=false;

    int left_ptr=0;
    int right_ptr=size-1;

    while (left_ptr<=right_ptr){
        if (arr[left_ptr]>arr[right_ptr]){      
            arr[right_ptr-1]+=arr[right_ptr];
            right_ptr--;
        }
        else {
            arr[left_ptr+1]+=arr[left_ptr];
            left_ptr++;
        }
        if (arr[left_ptr]==arr[right_ptr]) {         //lets skip this edge case for now that if left and right at initial have same values 
            left_ptr++;                              // like this -> [x, a, c, ..... , z, x]   
            right_ptr--;
            possibility=true;
            break;
        }
    }
    cout<<possibility;
}

//my second attempt still not correct