#include <iostream>
using namespace std;

int main()
{
    int array[]={1, 2, 7, 4, 5, 6};
    int size=sizeof(array)/sizeof(array[1]);

    bool flag=true;

    for (int i=1 ; i<size-1 ; i++){
        if (array[i]<=array[i-1]) {
            flag=false;
            break;
        }
        else flag=true;
    }
    cout<<flag;
}