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
            if (j==n){
                cout<<n;
            }
            else {
                switch (j){
                case 1:
                cout<<"1";
                break;

                //case n:         //This is the limitation of switch if can only compare those values which were available at time of compilation.
                //cout<<n;        // it cannot compare variables. values like num+1 or etc.
                //break;

                default:
                cout<<" ";
            }
            }
        }
        }
        cout<<endl;
    }
}