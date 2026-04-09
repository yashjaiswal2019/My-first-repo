#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for (int i=0 ; i<v.size() ; i++){
        cin>>v[i];
    }

    cout<<"put inthe X: ";
    int x;
    cin>>x;
    int occourence=-1;

    for(int i=v.size() ; i>=0 ; i--){
        if (v[i]==x){
            occourence=i;
            break;
        }
    }
    cout<<occourence<<endl;
}