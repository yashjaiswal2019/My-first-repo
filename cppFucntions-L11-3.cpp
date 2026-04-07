#include <iostream>
using namespace std;

int changevalue(int &x , int &y){       //(&) this is ampercent operator. and it gives alias name to variable that
    x=100;                              //they refer to same memory location
    y=20;
}

int main()
{
    int a=5 , b=10;                     

    changevalue(a, b);                  //x and a , y and b refer to same memory location respectively
    cout<<a<<endl<<b<<endl;
}