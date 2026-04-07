//trying to learn how to use debug.

#include <iostream>
using namespace std;

int addition(int x , int y){
    int result=x+y;
    return result;
}

void fun(string name){                              //becuse this returns nothing we cannot store the value of this fn 
    cout<<"Are you having fun, "<<name<<"?";        //because it returns nothing.
}

int main()
{
    int a=8 , b=9;
    int x=addition(a, b);
    cout<<x<<endl;

    cout<<addition(a, b)<<endl;       //dont have to 

    string name;
    cin>>name;
    fun(name);                  //because this fn returns nothing we can only call the fn
}                               //so usually in void type fn the cout statements are written in that fn itself.