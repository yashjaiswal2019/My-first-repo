//we have diven an array consisting of zero and one and we have to put all zeroes in first and one in last

#include <iostream>
#include <vector>
using namespace std;

void sort0And1(vector<int> &v );

int main()
{
    vector<int> array={0 , 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0};
    
    sort0And1(array);

    //printing the resulting vector
    for (int &ele:array){
        cout<<ele<<" ";
    }
    cout<<endl;
}

void sort0And1(vector<int> &v ){
    int size=v.size();

    //traverse the array once in that 
    //if find 0 -> insert in begin and erase that element
    //if find 1 -> insert from end and push that element

    for (int i=0 ; i<size ; i++){           //got to know this idea is wrong even though we insert one element and erase one 
        if (v[i]==0){                       //computer have to do 2n^2 operations -> not good
            v.erase(v.begin()+i);
            v.insert(v.begin() , 0);
        }
        else {
            v.erase(v.end()+i);         
            v.insert(v.end() , 1);
        }
    }
    return ;
}