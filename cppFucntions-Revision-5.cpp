//function to print square of first n natural number.

#include <iostream>
using namespace std;

int power(int a , int b){
    int result=1;
    for (int i=1 ; i<=b ; i++){
        result*=a;
    }
    return result;
}

int main(){
    int n;
    cout<<"enter value till square of first n numbers will be printed ?"<<endl;
    cin>>n;

    for (int i=1 ; i<=n ; i++){
        int square=power(i , 2);
        cout<<square<<endl;
    }
}