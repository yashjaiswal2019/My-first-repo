#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    //for loop
    for (int i=0 ; i<5 ; i++){          //i want to add 5 varibles to vector
        int element;
        cin>>element;

        v.push_back(element);
        //we can also take in input like we did in array but in that case we have to tell the size of array
        //like cin>>v[i];     -> if we do not know size then v[i] doesn't exist yet so cannot store value. 
    }
    
    for (int i =0 , n=v.size() ; i<n ; i++){
        cout<<v[i]<<" ";                    //prints value of i th index element.
    }

    //for-each loop
    for (int element:v){            //traverse every element of array and prints it
        cout<<element<<" ";
    }

    //while loop
    int n=0;
    int size=v.size();
    while(n<size){
        cout<<v[n]<<" ";
        n++;
    }
    
}