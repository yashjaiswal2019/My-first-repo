#include <iostream>
using namespace std;

struct phoneBook{
    string name;
    string number;
    float marks;
};

int main(){
    int n;
    cout<<"toatal people = ";
    cin>>n;

    phoneBook arr[n];

    for (int i=0 ; i<n ; i++){
        cout<<"Name : ";
        cin>>arr[i].name;

        cout<<"Number : ";
        cin>>arr[i].number;

        cout<<"Marks : ";
        cin>>arr[i].marks;
    }

    for (phoneBook &member : arr){
        cout<<member.name<<"    "<<member.number<<"     "<<member.marks<<endl;
    }

}