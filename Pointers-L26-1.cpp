// wild pointer

#include <iostream>
using namespace std;

int main()
{
    int *ptr;   // onlu declared the pointer
    cout<<ptr<<" "<<*ptr<<endl;

    return 0;
}