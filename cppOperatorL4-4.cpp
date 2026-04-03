#include <iostream>
using namespace std;

int main()
{
    int a=4;
    cout<<sizeof(a)<<endl;      //4

    char name='Y';
    cout<<sizeof(name)<<endl;   //1

    bool flag;
    a==name?flag=true:flag=false;
    cout<<flag<<endl; //0

    cout<<(&a)<<endl;   //adress of a

    cout<<(&flag)<<endl;    //address of flag

    cout<<a++<<endl;    //post increment operator //4
    cout<<++a<<endl;    //pre increment operator //6  it increasd value at first so it increased agin and printed 6 

    int b=-6;
    cout<<++b<<endl;    //using urinary minus and pre inc operator //-5

    int d=a+b;
    cout<<d<<endl;      //6+(-5)=1


    return 0;
}