// Q1 - Given an integer array and two integers L and R. Find the sum of elements between the
// index L and index R.
// Note: Both L and R inclusive.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int l ,r;
    cin>>l>>r;

    int sum=0;
    for (int i=l ; i<=r ; i++){
        sum+= v[i];
    }
    cout<<sum;

}