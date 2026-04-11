//we have diven an array consisting of zero and one and we have to put all zeroes in first and one in last
//we can use two pointers to sort the given array

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b);

void sortZeroAndOne(vector<int> &v);

int main()
{
    vector<int> arr={1, 0, 0, 0, 1, 0, 1, 0};

    sortZeroAndOne(arr);

    //printing
    for(int &ele:arr){
        cout<<ele<<" ";
    }
}


void swap(int &a , int &b){
    int c;                                          
    c=a;
    a=b;
    b=c;
    return ;
}

void sortZeroAndOne(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while (left_ptr<right_ptr){
        if (v[left_ptr] == 1 &&  v[right_ptr]==0){
            v[left_ptr++] = 0;
            v[right_ptr++]=1;
        }
        if (v[left_ptr] == 0 ) left_ptr++;
        
        if (v[left_ptr] == 1) right_ptr--;
    }
}