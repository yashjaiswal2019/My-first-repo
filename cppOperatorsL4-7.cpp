/*There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".*/

#include <iostream>
using namespace std;

int main()
{
    int total=45;
    int boy=25;
    int girl=total-boy;

    //doing calculation

    //let total number of student got Grade A is x.

    int x;
    x=17/0.8;
    
    int girlA=x-17;

    cout<<"girls that got a Grades are "<<girlA;

}