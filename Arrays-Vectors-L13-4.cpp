//last occourence - traversing Vector from start

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for (int i=0 , n=v.size(); i<n ; i++){
        int ele;
        cin>>v[i];
    }

    int x;
    cout<<"input = ";
    cin>>x;

    //have give back last reference of x.
    int ans=-1;
    for (int i=0 , n=v.size(); i<n ; i++){
        if (v[i]==x){
            ans=i;
        }
    }
    cout<<ans<<endl;
}
