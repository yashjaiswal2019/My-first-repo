// Q3 - Given a decimal number as input, we need to write a program to convert the given decimal
// number into its equivalent binary number.

// Input1 : 7
// Output1 : 111
// Input2 : 10
// Output2 : 1010

#include <iostream>
using namespace std;

int binForm(int x , int *temp);

int main()
{
    int x;
    cout << "please give the decimal number : ";
    cin >> x;

    int t=1;
    int *temp = &t;
    cout<<binForm(x , temp);
}

int binForm(int x , int *temp){
    // base case 
    if (x == 0 || x == 1) {
        *temp *= 10;
        return 1;
    }
    // self-work
    if (x%2 == 0) {
        int curr = *temp * binForm(x/2 , temp);
        *temp *= 10;
        return curr;
    }
    else {
        int curr = *temp;
        *temp *= 10;
        return curr * binForm(x/2 , temp);
    }
}

// this attempt is wrong