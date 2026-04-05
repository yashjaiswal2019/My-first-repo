#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cin>>a>>b;

    int exponent=1;

    for ( int i=1 ; i<=b ; i++){
        exponent*=a;
    }
    cout<<exponent<<endl;

}