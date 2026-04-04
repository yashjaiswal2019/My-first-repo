//the int=1 defined in for-loop have scope only inside the loop the memory gets de allocated after it comes out of loop.

#include <iostream>
using namespace std;

int main()
{
    int i=0;

    for(int i=1 ; i<5 ; i++){

    }
    cout<<i;
}