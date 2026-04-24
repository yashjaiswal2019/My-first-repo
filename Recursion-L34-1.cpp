#include <iostream>
#include <algorithm>
using namespace std;

void print(string name , int idx , int size , string temp , string& result);

int main()
{
    string name = "abc";
    int size = name.size();

    string temp="";
    string result="";

    print(name , 0 , size , temp , result);
    sort(name.begin() , name.end());
    cout << result;
}

void print(string name , int idx , int size , string temp , string& result){
    // base case
    if (idx == size){
        result += temp + " ";
        return;
    }
    // self-work
    char subStr = name[idx];
    print(name , idx+1, size , temp , result);
    print(name , idx+1 , size , temp + subStr , result);
}