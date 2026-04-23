// Q1 - Given two numbers x and y find a product using recursion.

// Input1 : x = 5, y = 2
// Output1 : 10
// Input2 : x = 100, y = 5
// Output2 : 500

#include <iostream>
using namespace std;

int product(int x , int y);

int main()
{
    int x , y;
    cin>>x>>y;
    cout<<product(x, y);
}

int product(int x , int y){
    // base case 
    if (y <= 0) return 0;
    // assumption
    return x + product(x , y-1);
}