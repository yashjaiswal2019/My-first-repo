#include <iostream>
using namespace std;

int main()
{
    int x=19;
    double y=9989.7672;

    int *ptrX=&x;
    double *ptrY=&y;
    cout<<ptrX<<endl;
    cout<<ptrY<<endl;

    cout<<sizeof(x)<<"  "<<sizeof(ptrX)<<endl;
    cout<<sizeof(y)<<"  "<<sizeof(ptrY)<<endl;

    ptrX++;             // this will increment the value stored in ptrX depending on tupe of variable's address stored in it
    ptrY++;
    cout<<ptrX<<endl;
    cout<<ptrY<<endl;
}