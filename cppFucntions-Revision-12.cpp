#include <iostream>
using namespace std;

void swap(int a , int b){
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int i=6 , j=7;
    swap(i , j);            //a copy of i and j was made and the changes made by swap fn is done to that copy the origional 
    cout<<i<<" "<<j;        //is still the same
}