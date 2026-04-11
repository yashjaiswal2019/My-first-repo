//learning how mwmory works in computer ??
//C++ stores strings as an Array

#include <iostream>
using namespace std;

int main()
{
    string name="yash";
    string *n = &name;

    cout<<n<<endl;
    for (int i=0 ; i<name.length() ; i++){
        cout<<&name[i]<<endl;
    }

}