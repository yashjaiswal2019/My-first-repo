//we have diven an array consisting of zero and one and we have to put all zeroes in first and one in last

//we traversed array twice can we optimize so we traverse array only once.

#include <iostream>
#include <vector>
using namespace std;

void sortZeroesAndONe(vector<int> &v);

int main()
{
    vector<int> array={0 , 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0};
    int size= array.size();

    int totalZeroes=0;
    for (int i=0 ; i<size ; i++){
        if (array[i]==0) totalZeroes++;
    }
    
    //filling in zeroes
    for (int i=0 ; i<size ; i++){
        if (i<totalZeroes) array[i]=0;
        else array[i]=1;
    }

    for (int ele:array){
        cout<<ele<<" ";
    }
}

//creating fn to sort zeroes and ones
void sortZeroesAndONe(vector<int> &v){
    int size=v.size();
    int zeroes=0;

    for (int i=0 ; i<size ; i++){
        if (v[i]==0) zeroes++;
    }

    //sorting array
    for (int i=0 ; i<size ; i++){
        if (i<zeroes) v[i]=0;
        else v[i]=1;
    }
    return ;
}