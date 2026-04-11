//given array sort all int to beginning followed by odd
//relative order of even and odd does not matter.

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b){
    int c;
    c=a;
    a=b;
    b=c;
    return ;
}

void sortEvenOdd(vector<int> &v);

int main()
{
    vector<int> arr={2, 4, 6, 3, 2, 4, 7, 5, 8, 2, 9, 0,3, 6};

    sortEvenOdd(arr);

    for (int &ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}

void sortEvenOdd(vector<int> &v){
    
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while (left_ptr<right_ptr){

        if ((v[left_ptr] & 1) && (v[right_ptr] & 1)==0){          //any (number & 0)-> always zero we have to compare it to zero to know if it is even  
            swap (v[left_ptr] , v[right_ptr]);                      // (number & 1)==0 -> this gives that number is even or not 
            left_ptr++ , right_ptr--;                               //tells if last bit is 0 or not 
        }
        else {
            if (((v[left_ptr] & 1))==0) left_ptr++;
            if (v[right_ptr] & 1) right_ptr--;
        }
    }
    return ;
}