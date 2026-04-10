//this is three sum problem and i have to find triplet equal to target sum and they are of different indices
//basically you can only take one element only once 
//constraint -> can not have 3 loops.

//i am thinking can i write bruteforce without constraint

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array={1 , 2, 3, 6 ,4, 5, 7 , 0 , -1, -3, -5};
    int size= sizeof(array)/sizeof(array[0]);
    int targetSum;
    cin>>targetSum;

    int triplets=0;
    int RepeatedTriplet=0;

    for(int i=0 ; i<size ; i++){
        for (int j=i+1 ; j<size ; j++){
            for (int k=j+1 ; k<size ; k++){
                if (array[i]+array[j]+array[k]==targetSum){
                    if (array[i]==array[j]==array[k]) RepeatedTriplet++;
                    triplets++;
                    cout<<array[i]<<" , "<<array[j]<<" , "<<array[k]<<endl;
                }
            }
        }
    }

    cout<<triplets-RepeatedTriplet<<endl;
}