#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int sum=0;

    do {
        sum+=num;
        num--;
    }while (num>0);

    cout<<sum<<endl;
}