#include <iostream>
using namespace std;

int add(int num1 , int num2);       //this is the prototype of add finction that i will deine later after int main() fn.

int main(){
    int a , b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
}

int add(int num1 , int num2){
    int sum=num1+num2;
    return sum;
}