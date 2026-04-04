#include <iostream>
using namespace std;

int main()
{
    int num=50;

    for (num ; (num>0 && num<=50) ; num--){
        if (num%3==0){
            continue;
        }
        cout<<num<<endl;
    }
}