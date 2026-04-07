#include <iostream>
using namespace std;

string welcome(string name){
    return "Hello, " + name;
}


int main()
{
    string name;
    cout<<"what is your name ?"<<endl;
    cin>>name;

    cout<<welcome(name);
}