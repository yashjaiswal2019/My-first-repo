#include <iostream>
using namespace std;

int add(int a , int b=9 , int c=5){
    return a+b+c;
}

int main()
{
    int a=20;
    cout<<add(a)<<endl;         //takes only value of a -> first paramer rest take default valued
    cout<<add(2, a)<<endl;      //
    cout<<add(a , 0 , 0)<<endl;

}