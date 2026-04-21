// remove all of the occourences of 'a' from a given string.

// Method 2 --> without changing the given string.

#include <iostream>
using namespace std;

string removeA(string s , int idx , int size);

int main()
{
    string name="yash";
    int size = name.size();
    string result = removeA(name , 0 , size);

    cout<<result;
}

string removeA(string s , int idx , int size){
    // base case 
    if (idx==size) return "";
    string curr="";
    curr+=s[idx];
    
    return ((s[idx] == 'a' ||  s[idx] == 'A') ? "" : curr) + removeA(s , idx+1 , size);
}