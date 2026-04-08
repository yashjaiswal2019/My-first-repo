#include <iostream>
using namespace std;

int max(int array[] , int n){
    int max=array[0];

    for (int i=0 ; i<n ; i++){
        if (array[i]>max)  max=array[i];
    }
    return max;
}

int main()
{
    //in given ques array will always aontain 0 and n in itself

    int array[]={8, 6, 4, 2, 3, 5, 0, 1};
    int n=sizeof(array)/sizeof(array[0]);
    int sum=n*(n+1)/2;

    int actualsum=0;

    for (int i=0 ; i<n ; i++){
        actualsum+=array[i];
    }
    cout<<sum-actualsum<<endl;
}