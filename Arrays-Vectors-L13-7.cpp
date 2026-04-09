#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for (int i=0 ; i<v.size() ; i++){
        cin>>v[i];
    }
    cout<<"put in X : ";
    int x;
    cin>>x;
    
    int ans=0;

    for (int i=0 ; i<v.size() ; i++){
        if (v[i]>x) ans+=v[i];
    }
    cout<<ans<<endl;
}