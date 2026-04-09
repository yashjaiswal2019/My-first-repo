#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int l;
    cout<<"length of array is = ";
    cin>>l;
    vector<int> num(l);

    for (int i=0 ; i<l ; i++){
        cin>>num[i];
    }

    int sum=0;
    for(int i=0 ; i<l ; i++){
        if (i & 1) sum-=num[i];
        else sum+=num[i];
    }
    cout<<sum;
}