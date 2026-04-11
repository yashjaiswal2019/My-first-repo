#include <iostream>
#include <cstdlib>
#include <cs50.h>
using namespace std;

int main()
{
    int *x;
    int *y;

    x=(int*)malloc(sizeof(int));

    *x=12;
    *y=10;

    // delete y;

    cout<<"X = "<<x<<endl<<"Y = "<<y<<endl;
    free (x);
    free (y);

    cout<<"X = "<<x<<endl<<"Y = "<<y<<endl;
    return 0 ;
}