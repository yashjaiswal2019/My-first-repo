#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;                      //if size exceeds capacity capacity increases itself to greater than or equal to capacity.

    cout<<"Size = "<<v.size()<<endl<<"capacity = "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Size = "<<v.size()<<endl<<"capacity = "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size = "<<v.size()<<endl<<"capacity = "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size = "<<v.size()<<endl<<"capacity = "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size = "<<v.size()<<endl<<"capacity = "<<v.capacity()<<endl;

    v.resize(14);
    cout<<"Size = "<<v.size()<<endl<<"capacity = "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size = "<<v.size()<<endl<<"capacity = "<<v.capacity()<<endl;


}
