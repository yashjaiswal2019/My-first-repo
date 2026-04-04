#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int sum=0;
    int a=1;        //this is our loop variable

    while (a<=num){     //condition
        sum=sum+a;      
        a++;        //updating loop variable
    }
    cout<<sum<<endl;
}
