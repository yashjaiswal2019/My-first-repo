#include <iostream>
#include <vector>
using namespace std;

void print(string &str , int idx , int size , string curr , vector<string> &ans , vector<string> &data);

int main()
{
    // ASCII of 'a' = 97 
    // mapping of possible characters 

    vector<string> data = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz" };

    string str = "23";
    int size = str.size();

    string curr = "";

    vector<string> ans; 
    print (str , 0 , size , curr , ans , data);

    // printing the vactor 
    for (string ele : ans){
        cout << ele << " ";
    }
}

void print(string &str , int idx , int size , string curr , vector<string> &ans , vector<string> &data){
    // base case 
    if (idx == size){
        ans.push_back(curr);
        return;
    }
    int digit = str[idx] - '0';
    if (digit <= 1){
        print(str , idx+1, size , curr , ans , data);
        return;
    }

    for (int i=0 ; i<data[digit].size() ; i++){
        print(str , idx+1, size , curr + data[digit][i] , ans , data);
    }
    return ;
    
}