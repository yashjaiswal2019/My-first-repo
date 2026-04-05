#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int digit=0;

    for ( ; num>0 ; num=num/10){
        digit++;
    }
    cout<<digit<<endl;

}