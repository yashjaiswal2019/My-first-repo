//- Given the age of a person, write a function to check if the person is eligible to vote or not.

#include <iostream>
using namespace std;

void eligibility(int a , int b){
    if (a-b>=0){
        cout<<"eligible";
    }
    else {
        cout<<"not eligible";
    }
}

int main(){
    int n;
    cout<<"what is age criteria for voting ?"<<endl;
    cin>>n;

    int age;
    cout<<"what is your current age ?"<<endl;
    cin>>age;
    
    eligibility(age , n);

}