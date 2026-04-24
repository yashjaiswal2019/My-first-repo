// Q3 - Given a decimal number as input, we need to write a program to convert the given decimal
// number into its equivalent binary number.

// Input1 : 7
// Output1 : 111
// Input2 : 10
// Output2 : 1010

#include <iostream>
using namespace std;

int binform (int x);

int main()
{
    int decimal = 10;
    int power = 1;
    int *pow = &power;
    cout << binform(decimal) << endl;
}

int binform (int x){
    // base case
    if (x == 0 || x == 1) {
        return x;
    }
    // self work
    return binform(x/2) * 10 + x%2;
}