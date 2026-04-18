// i am testing how many times the loop will run

#include <iostream>
using namespace std;

int main()
{
    int k=2 , n=100;
    int runs=0;
    for (int i=0 ; i<n ; i++){
        cout<<i<<" ";
        i*=k;
        runs++;
        cout<<i<<endl;
    }

    cout<<runs<<endl;
}