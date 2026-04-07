//how compiler diferentiates the fn's. 

#include <iostream>
using namespace std;

void add(int a, int b=2){       //function 1.
    int sum=a+b;
    cout<<sum<<endl;
}

void add(int a, int b=2 , int z=0){     //function 2.
    int sum=a+b+z;
    cout<<sum<<endl;
}



int main()
{
    int a=2;
    //add(2);   -> this will give error a compiler will get confused which fn to choose between fn1 and fn2.
}