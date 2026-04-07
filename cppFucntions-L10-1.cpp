#include <iostream>
using namespace std;

int add(int num1 , int num2){                       //multiple functions can have same name but the differentiating factors are :
    int sum=num1+num2;                              // return type and the number of parameters.
    return sum;
}

int add(int num1 , int num2 , int num3){
    int sum=num1+num2+num3;
    return sum;
}

float add (float num1 , float num2 ){
    float sum = num1+num2;
    return sum; 
}

int main()
{
    int a=5, b=10 ;
    
    float c=3.9 , d=9.92;

    cout<<add(c, d)<<endl;
}

