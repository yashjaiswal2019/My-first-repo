//make a alphabetical diamond shape pattern.
//user will give a number and we will have fo print that pattern
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //printing the upper Triangle.
    for (int i=1 ; i<=n ; i++){
        char name='A';
        for (int j=1 ; j<=n-i ; j++){       //loop for printing spaces
            cout<<" ";
        }
        for (int k=1; k<=2*i-1 ; k++){
            cout<<name++;
        }
        cout<<endl;
    }
    //printing lower Triangle.
    for (int l=1 ; l<=n-1 ; l++){              //prints spaces in lower triangle
        char name='A';        
        for (int m=1 ; m<=l ; m++){
            cout<<" ";
        }
        for (int o=1 ; o<=(n-l)*2-1 ; o++){     //prints characters in lower Triangle
            cout<<name++;
        }
        cout<<endl;
    }
}