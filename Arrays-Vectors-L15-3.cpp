//we have diven an array consisting of zero and one and we have to put all zeroes in first and one in last
//we can use two pointers to sort the given array

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b);

void sortZeroeAndOne(vector<int> &v);

int main()
{
    vector<int> arr={1, 0, 0, 0, 1, 0, 1, 0};

    sortZeroeAndOne(arr);

    //printing
    for(int &ele:arr){
        cout<<ele<<" ";
    }

}


void swap(int &a , int &b){
    int c;                                          //as usual my answer i wrong now lets see solution.
    c=a;
    a=b;
    b=c;
    return ;
}

void sortZeroeAndOne(vector<int> &v){
    int size=v.size();

    for (int i=0 , j=size-1 ; i!=j ; ){
        int leftvalue=v[i];
        int rightvalue=v[j];

        bool swapped=false;

        if (v[i]>v[j]){
            swap(v[i] , v[j]);
            i++ , j--;
            swapped=true;
        }
        if (v[i]==v[j]){
            i++;
        }
    }

    
}