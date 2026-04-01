#include <iostream>
using namespace std;
int main(){
    
    int num1=35;
    int num2=5;

    cout<<num1+num2<<endl;      
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;

    cout<<(num1==num2)<<endl;   //false
    cout<<(num1!=num2)<<endl;   //true
    cout<<(num1<num2)<<endl;    //false
    cout<<(num1>num2)<<endl;    //true

    num1+=3;    //35+3=38
    cout<<num1<<endl;

    num2+=5;    //5+5=10
    cout<<num2<<endl;

    return 0;

}