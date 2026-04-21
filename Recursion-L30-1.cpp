// remove all of the occourences of 'a' from a given string.
// we made chnges to give string itself --> not so good lets try another method

#include <iostream>
using namespace std;

void removeA(string &s , int idx);

int main()
{
    string s="abcax";
    removeA(s , 0);
    cout<<s<<endl;
}

void removeA(string &s , int idx){
    // base case
    if (idx == s.size()) return;
    // assumption and self work
    if (s[idx] == 'a' || s[idx] == 'A') s.erase(s.begin() + idx);
    removeA(s , idx+1);
     
}