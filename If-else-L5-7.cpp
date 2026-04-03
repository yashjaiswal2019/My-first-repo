#include <iostream>
using namespace std;

int main()
{
    int day;
    cin>>day;

    int x=day%7;        //Considering first day of week to be sunday
    
    switch (x){
        case 1:
        cout<<"MONDAY";
        break;

        case 2:
        cout<<"TUESDAY";
        break;

        case 3:
        cout<<"WEDNESDAY";
        break;

        case 4:
        cout<<"THURSDAY";
        break;

        case 5:
        cout<<"FRIDAY";
        break;

        case 6:
        cout<<"SATURDAY";
        break;

        default :
        cout<<"SUNDAY";
    }
}