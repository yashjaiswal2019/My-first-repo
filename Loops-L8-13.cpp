#include <iostream>
using namespace std;

int main()
{
    int n=500;
    int sum=0;

    for(int i=100 ; i<=n ; i++){
        int sum=0;
        int t=i;

        while (t!=0){
            sum+=(t%10)*(t%10)*(t%10);
            t/=10;
        }
        if (sum==i){
            cout<<sum<<endl;
        }
    }
}