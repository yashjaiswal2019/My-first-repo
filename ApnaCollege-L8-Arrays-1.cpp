#include <iostream>
using namespace std;

int main()
{
    int marks[]={10, 23, 65 , 34 ,78, 90, 48 };
    int size=sizeof(marks)/sizeof(marks[0]);

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout<<marks[5]<<endl;
    // cout<<marks[6]<<endl;

    //Loops on array

    for (int i=0 ; i<size ; i++){
        cout<<marks[i]<<endl;
    }
}