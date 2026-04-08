/*Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101
For ex: a[]={5,6,10,4,9}
b[]={1,2,3,4,5}
Output: 5
Explanation: a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations*/


#include <iostream>
using namespace std;
//finds the minimum in an array
int lowidx(int a[5]){
    int min=a[0];
    int idx=0;
    for (int i=0 ; i<5 ; i++){
        if (min>a[i]){
            min=a[i];
            idx=i;
        }
    }
    return idx;
}

int main()
{
    int a[]= {5, 6, 10, 4,9};
    int b[]= {1, 2, 3, 4, 5};

    int resultA=lowidx(a);
    int resultB=lowidx(b);

    if (resultA==resultB){
        resultA>resultB ? a[resultA] = 0 : b[resultB] = 0;
    }

    cout<<a[resultA]+b[resultB];

    

   
}