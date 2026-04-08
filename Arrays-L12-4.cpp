#include <iostream>
using namespace std;

int main()
{
    char vowel[5];

    for (char &element:vowel){   //taking in the input but it will not store values inside the array
        cin>>element;           //but if we use ampercent '&' operator then it will store those inputs in vowels array
    }

    for(char element:vowel){
        cout<<element<<"  ";
    }
}