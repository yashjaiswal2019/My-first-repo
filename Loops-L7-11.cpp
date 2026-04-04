//i am using too much if-else i am getting idea that i can use switch here.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=n ; j++){
            if (i==1 || i==n){
            cout<<j;
        }
        else {
            if (j==1){
                cout<<"1";
            }
            else {
                if (j==n){
                    cout<<n;
                }
                else {
                    cout<<" ";
                }
            }
        }
        }
        cout<<endl;
    }
}