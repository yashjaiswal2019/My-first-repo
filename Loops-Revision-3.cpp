//Learning how to use do-while Loop.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=0;

    do {                                //it will execute thi code first and then it will check the condition,
        cout<<"hello"<<endl;            //code will be executed for at least once for any input.
        i++;
    }while(i<n);

    cout<<"World";
}