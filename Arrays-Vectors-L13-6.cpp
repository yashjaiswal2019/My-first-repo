#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num(5);

    for (int i=0 ; i<num.size() ; i++){
        cin>>num[i];
    }

    cout<<"for which to find occourences : ";
    int x;
    cin>>x;

    int ans=0;
    for (int i=0 ; i<num.size() ; i++){
        if (num[i]==x){
            ans++;
        }
    }
    cout<<ans<<endl;

}