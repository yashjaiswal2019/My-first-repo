// Dangiling pointer 

#include <iostream>
using namespace std;

int main()
{
    int *p=NULL;
    {
        int x=23;
        p = &x;
    }
    cout<<p<<" "<<*p<<endl;
}