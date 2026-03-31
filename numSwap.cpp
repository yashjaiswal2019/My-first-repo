#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the values of"<<endl<<"A: ";
    cin>>a;

    cout<<"B: ";
    cin>>b;
    //swapping the numbers
    c=a;
    a=b;
    b=c;

    cout<<"swapped values are"<<endl<<"A: "<<a<<endl<<"b: "<<b;
    return 0;
}