//Method 1 -> arranging array int absolute order and squaring them.

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b){
    int c;
    c=a;
    a=b;
    b=c;
    return;
}

int absolutevalue(int a){
    if (a<0) a*=-1;
    return a;
}

int main()
{
    vector<int> arr={-4 , -3, -1 , 0, 2, 10};
    cout<<"Please put in the value"<<endl;
    

    int n=arr.size();
    
    
    //squaring the elements
    for(int &element:arr){
        element*=element;
    }

    //arranging array in ascending order
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n-1 ; j++){
            if (arr[j]>arr[j+1]) swap(arr[j] , arr[j+1]);
        }
    }
    //printing array
    for(int element:arr){
        cout<<element<<" ";
    }
}