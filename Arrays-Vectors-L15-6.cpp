// given array a of nondecreasing sorted find  an array of its squares in same order.

//we can also use two pointer here our max absolute value is always going to in first or last in case including -ve 
//make an ans array vector and push the square of max value and at end reverse the vector

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int absolute(int a);

int square(int a);

int main()
{
    vector<int> arr ={-10 , -7 , -6 , -3, 1,  4, 5, 6, 7};

    int left_ptr=0;
    int right_ptr=arr.size()-1;

    vector<int> ans(arr.size());

    int ansindex= arr.size()-1;

    while (left_ptr<=right_ptr){
        if (absolute(arr[left_ptr])<=absolute(arr[right_ptr])){
            ans[ansindex]=square(arr[right_ptr]);
            right_ptr--;
            ansindex--;
        }
        else {
            ans[ansindex]=square(arr[left_ptr]);
            left_ptr++;
            ansindex--;
        }
    }
    //printing the ans array
    for (int &ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;

}

int square(int a){
    return a*a;
}

int absolute(int a){
    if (a<0) a*=-1;
    return a;
}