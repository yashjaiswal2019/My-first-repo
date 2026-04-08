#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    int size=sizeof(array)/sizeof(array[0]);

    for (int idx=0 ; idx<size ; idx++){        //the idx will be traversing inside the array and for each value of index
        cout<<array[idx]<<endl;
    }

    //for-each loop

    for (int element:array){
        cout<<element<<endl;
    }

    //while loop 
    int index=0;

    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }
}