/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/

#include <iostream>
using namespace std;

int main()
{
    int sell , buy;

    cout<<"buy price = ";
    cin>>buy;

    cout<<"sell price = ";
    cin>>sell;

    int x=sell-buy;

    if (x>0){
        cout<<"profit = "<<x<<endl;
    }
    else{
        cout<<"loss = "<<x*-1<<endl;
    }

}