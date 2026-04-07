#include <iostream>
using namespace std;

int changevalue(int z){
    z=100;
    return z;
}

int main()
{
    int a=5;
    changevalue(a);     //it creates a new variable in memory and copy the value of a to that new variable.
    cout<<a<<endl;      //and that new vriable is sent to that fn.

    return 0;
}