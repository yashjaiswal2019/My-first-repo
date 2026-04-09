// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose sum is exactly x.


#include <iostream>
#include <vector>
using namespace std;

// bool ifexist(int)

int main()
{
    vector<int> v={-1,0,1,2,3};

    int x=5;
    // cin>>x;
    int n=v.size();

    bool flag=false;

    if (x-v[0]>v[v.size()-1]+v[v.size()-2]) flag=false;
    //we will check if x-current element exist in array
    else {
        for (int i=0 ; i<n ; i++){
            for (int j=0 ; j<n ; j++){
                if (v[j]==x-v[i]){
                    flag=true;
                    cout<<flag<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<flag<<endl<<"out";
}