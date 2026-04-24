// Q3 - Given a decimal number as input, we need to write a program to convert the given decimal
// number into its equivalent binary number.

// Input1 : 7
// Output1 : 111
// Input2 : 10
// Output2 : 1010

// lets try using loops first

#include <iostream>
using namespace std;

int main()
{
    int x= 11;
    int binary = 0;
    int pow=1;
    while (x>0) {
        binary += x%2 * pow;
        pow *= 10;
        x /= 2;
    }
    cout << binary << endl;
}