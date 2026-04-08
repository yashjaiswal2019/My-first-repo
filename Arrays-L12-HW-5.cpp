//i wrote this fn maxAndmin but later realized i don't need it i can solve this ques without it and computeer
//will be doing almost same number of operations

#include <iostream>
using namespace std;

//fn for min and maximum of an array
void maxAndMin(int array[] , int n , int &max , int &min ){
    int max=array[0];
    int min=array[0];

    for (int i=0 ; i<n ; i++){
        if (max>array[i]){
            if (min>max) min=max;
        }
        else max=array[i];
    }
}

int main()
{
    int array[]={8 , 6, 4, 2, 3, 5, 0, 1};
    int max;
    int min;

    int n=sizeof(array)/sizeof(array[0]);

    maxAndMin(array , n , max , min);



}