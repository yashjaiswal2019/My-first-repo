//exploring how special characters and symbols are assigned values in the ASCII System.

#include <iostream>
using namespace std;

int main()
{
    char name= 'A';
    int n;
    cin>>n;
    
    
    for (int i=1 ; i<=n ; i++){
        cout<<++name<<endl;
    }
}