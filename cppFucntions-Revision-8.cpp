//print all odd number between two numbers.

#include <iostream>
using namespace std;

void oddnumbers(int a , int b){
    if (a%2==0) a++;

    for (a ; a<=b ; a+=2 ){
        cout<<a<<endl;
    }
}

int main()
{
    int a , b;
    cin>>a>>b;

    oddnumbers(a , b);
}