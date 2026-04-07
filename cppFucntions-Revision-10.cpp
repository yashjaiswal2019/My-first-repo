#include <iostream>
using namespace std;

string name = "Yash";       //Global Scope

int main()
{
    cout<<name<<endl;
    name="yashu";           //had changed value of name from Yash to yashu
    cout<<name<<endl;

}