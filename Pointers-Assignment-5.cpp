// learnt about strings how it is stored in the memory

#include <iostream>
using namespace std;

int main()
{
    string name="twitter";
    int n=name.size();

    cout<<n<<" "<<sizeof(name)<<" "<<sizeof(name[0])<<endl;
    for (char ele : name){
        cout<<ele<<" ";
    }
}

