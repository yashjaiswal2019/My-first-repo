//sum of n natural number using for loop.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int sum=0;

    for (int a=1 ; a<=num ; a++){   //a is loop variable
        sum+=a;
    }
    cout<<sum<<endl;
}