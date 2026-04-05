#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;

    for (int i=1 ; i<=n ; i++){     //using (condition) ? exp1:exp2 statement
        i%2==0 ? sum-=i : sum+=i;
    }
    cout<<sum<<endl;
}