// find the Greatest common divisor to two given numbers 

// lets try doing this first using loops 
#include <iostream>
using namespace std;

int main()
{
    int a=15 , b=30;
    // cin>>a>>b;
    
    // my observation is if in a and b one is odd and one is even then 2 cases are possible 
    // one number divides the other minimum number will be gcd 
    // if they do not divide --> gcd=1;

    if (((a&1) and ((b&1)==0)) or ((b&1) and ((a&1)==0))){
        int gcd=min(a , b);
        if (a%gcd==0 && b%gcd==0){
            cout<<gcd<<endl;
            return 0;
        }
    }

    int gcd=min(a , b);
    for (int i=gcd ; i>=1 ; i--){
        if (a%i==0 && b%i==0) {
            gcd=i;
            break;
        }
    }
        
    cout<<gcd<<endl;
}