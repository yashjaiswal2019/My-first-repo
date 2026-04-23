// find total number of possible paths in a given metrix to reach from top left to bottom right 

//  Time Comlexity = O(2^m+n)
// Space Copmlexity = O(m+n)

#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int m , n;
    cin>>m>>n;

    cout<<fact(m-1+n-1)/(fact(m-1) * fact(n-1))<<endl;
}

int fact(int n){
    int product=1;
    for (int i=1 ; i<=n ; i++){
        product *=i;
    }
    return product;
}