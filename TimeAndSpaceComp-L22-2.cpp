// making nth fibblonacci number finder whith better space complexity

#include <iostream>
using namespace std;

int main()
{
    int n=8;
    int a=0 , b=1;

    for (int i=2 ; i<=n ; i++){
        int nTHfibo=a+b;
        a=b;
        b=nTHfibo;
    }
    cout<<b<<endl;
}