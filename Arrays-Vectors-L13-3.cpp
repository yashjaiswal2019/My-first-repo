#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i=0 ; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    v.insert(v.begin()+2 , 10);

    for (int element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    v.erase(v.end()-1);
    for (int element:v){
        cout<<element<<" ";
    }
    cout<<endl;
}