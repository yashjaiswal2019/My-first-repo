// given two inputs p and q output p^q using recursive relation

#include <iostream>
using namespace std;

int pow(int p , int q);

int main()
{
    int p , q;
    cout<<"give 'p' and 'q' : ";
    cin>>p>>q;

    cout<<pow(p , q);
}

int pow(int p , int q){
    if (q==0) return 1;
    return p* pow(p , q-1);
}

//  Time Complexity == O(q)
// Space Complexity == O(q)