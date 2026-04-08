#include <iostream>
using namespace std;

int main()
{
    int array[] = {-20, 4, 8, 0, 5875, 7, 6, 3, 5, 45, 01};
    int max=array[0];

    for (int i=0 ; i<11 ; i++){
        if (max<array[i]){
            max=array[i];
        }
    }
    cout<<max;


}