#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"what are your Marks ?"<<endl;
    cin>>marks;

    if ((marks==100) || (marks>90)){
        cout<<"Your grade is A+";
    }
    else if ((marks==90) || (marks>80)){
        cout<<"Your grade is A";
    }
    else if ((marks==80) || (marks>70)){
        cout<<"Your grade is B+";
    }
    else if ((marks==70) || (marks>60)){
        cout<<"Your grade is B";
    }
    else if ((marks==60) || (marks>50)){
        cout<<"Your grade is C";
    }
    else if ((marks==50) || (marks>40)){
        cout<<"Your grade is D";
    }
    else if ((marks==40) || (marks>30)){
        cout<<"Your grade is E";
    }
    else if (marks<=30){                        // in this line you can remove (if) but it will give error because else cannot have condition.
        cout<<"Your grade is F";
    }
}

/*
you can also write last else-if like this 

else {
    cout<<"Your grade is F."
    }
*/