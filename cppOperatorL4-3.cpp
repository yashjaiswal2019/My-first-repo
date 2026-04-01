#include <iostream>
using namespace std;
int main (){

    int num1=5;    //0101

    cout<<(num1<<1)<<endl;      //30
    cout<<(num1>>1)<<endl;      //7

    
    int num2=8;     //1000

    //bitwise and
    cout<<(num1&num2)<<endl;    //0000==0
    
    //bitwise or
    cout<<(num1|num2)<<endl;    //1101==13

    //bitwise exclusive or
    cout<<(num1^num2)<<endl;    //1101==13

    

    return 0;
}