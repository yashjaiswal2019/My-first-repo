//leetCode problem number 258

#include <iostream>
using namespace std;

int adddigit(int num){
    int sum=0;
    while (num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}


int main()
{
    int num;
    cin>>num;

    int ans=adddigit(num);

    while (ans>=10){
        ans=adddigit(num);
    }
    cout<<ans;
}
