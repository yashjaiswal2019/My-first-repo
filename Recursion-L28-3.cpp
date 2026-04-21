// given two inputs p and q output p^q using recursive relation
// trying to optimise the solution using the learining from the leetcode ques pow(a , b)

#include <iostream>
using namespace std;

int pow(int p , int q);

int main()
{
    int p , q;
    cout<<"give 'p' and 'q' : ";
    cin>>p>>q;

    cout<<pow(p , q);
}

int pow(int p , int q){
    if (q==0) return 1;
    if (q==1) return p;

    if (q & 1) {
        int a = pow(p , (q-1)/2);
        return p*a*a;
    }
    else {
        int a = pow(p , q/2);
        return a*a;
    }
}

// Time complexity = O(log(q))
// space comlexity