// Q5 - Write a function that returns the first character, last character and the number of
// occurrences of ‘t’ in a string input by user.
// Input: twitter
// Output: t r 3

#include <iostream>
using namespace std;

void wordAnalysis(string name);

int main()
{
    string name;
    cout<<"please enter the word"<<endl;
    cin>>name;

    wordAnalysis(name);


}

void wordAnalysis(string name){

    if (name.size()==0) {
        cout<<"please enter a word at least, Thankyou."<<endl;
        return ;
    }

    int totalTs=0;
    for (int i=0 , n=name.size() ; i<n ; i++){
        if (name[i]=='t' || name[i]=='T') totalTs++;
    }

    cout<<"first character is : "<<name[0]<<endl;
    cout<<"last character is : "<<name[name.size()-1]<<endl;
    cout<<"total number od 't' present in word = "<<totalTs<<endl;
    return ;
}