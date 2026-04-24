#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(string& str , int idx , int size , string result , vector<string>& ans);

int main()
{
    string str = "abc";
    vector<string> ans;
    string result = "";

    int size = str.size();
    
    print(str , 0 , size , result , ans);
    sort (ans.begin() , ans.end());
    // printing the result
    for (string& ele : ans){
        cout << ele << " ";
    }
}

void print(string& str , int idx , int size , string result , vector<string>& ans){
    // base - case 
    if (idx == size){
        ans.push_back(result);
        return;
    }
    // self - work
    print(str , idx + 1 , size , result + str[idx] , ans);
    print(str , idx + 1 , size , result , ans);
}