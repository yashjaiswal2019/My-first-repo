// There are N stones, numbered 1, 2, …, N. For each i (1 ≤ i ≤ N), the height of Stone i is hi. 
// There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

// If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. 
// Here, a cost of |hi − hj| is incurred, where j is the stone to land on.

// Find the minimum possible total cost incurred before the frog reaches Stone N.

// Input
// n = 4
// arr[] = 10 30 40 20

// Output
// 30

#include <iostream>
#include <vector>
using namespace std;
int abs(int n);
int minimumCost(vector<int> v , int cost);

int main()
{
    vector<int> arr={10 , 40 , 30 , 40 , 50};
    cout<<minimumCost(arr , 0);
}

int abs(int n){
    if (n<0) return n*-1;
    else return n;
}

int minimumCost(vector<int> v , int currpos){   //10 , 100 , 40 , 80
    //base case
    // if frog is already at end 
    if (currpos==v.size()-1) return 0;
    if (currpos==v.size()-2) return abs(v[currpos]-v[v.size()-1]);
    // selfwork 
    //have to decide which jump to take for minimum cost 
    if ((v[currpos]-v[currpos+2]) < (v[currpos]-v[currpos+1])){
        return abs(v[currpos]-v[currpos+2]) + minimumCost(v , currpos+2);
    }
    else return abs(v[currpos]-v[currpos+1]) + minimumCost(v , currpos+1);
}