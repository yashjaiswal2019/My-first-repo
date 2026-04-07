#include <iostream>
using namespace std;

int main()
{
    int p=5;
    int &q=p;           //giving variable p an alias name of q
    cout<<q<<endl;

    q++;            //if we increase p by 1 then q shoult also be increased by 1.
    cout<<p<<endl;
    
    cout<<&p<<endl<<&q;     //this shows p and q reference to same memory allocation location.

    return 0;
}