//I struggled in today's homework so i am reattmpting questions
//first lets try the brute force method.

//we have to check if our current element is greater than element on its left and smaller than on its right. 

#include <iostream>
using namespace std;

int main()
{
    int array[]={1, 6, 5, 7, 10, 8, 9};
    int size=sizeof(array)/sizeof(array[0]);

    //traverse through array.
    for (int i=1 ; i<size-1 ; i++){           //if we start traversing array from index 0 , the left check loop will not execute 
        bool leftok=true;                   //and right check will give true then first element will be printed 
        bool rightok=true;                  //so is case with last element of array when i=6 , first loop gives true and 2nd loop doesn't run
                                            //so wechoult only check in between elements of array 
        //checking left element             //so check array from i=1 to i=size-1.
        for (int j=0 ; j<i ; j++){
            if (array[j]<array[i]) leftok=true;
            else {
                leftok=false; 
                break;
            }
        }

        //checking right side 
        for (int k=i+1 ; k<size ; k++){
            if (array[k]>array[i]) rightok=true;
            else {
                rightok=false; 
                break;
            }
        }

        if (leftok && rightok) {
            cout<<array[i]<<endl;
            return 0;
        }
    }
    cout<<"no such value exists inside the given Array.";
}
