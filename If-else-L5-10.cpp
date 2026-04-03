//check if given values of length and breath forms a square or not.

#include <iostream>
using namespace std;

int main()
{
    int l,b;
    cout<<"length = ";
    cin>>l;

    cout<<"length = ";
    cin>>b;

    if (l==b){
        cout<<"Square";
    }
    else{
        cout<<"Rectangle";
    }

}