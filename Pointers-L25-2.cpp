#include <iostream>
using namespace std;

void find(string name , int *first , int *last);

int main()
{
    string name;
    cin>>name;

    int first=-1 , last=-1;
    int *ptrF=&first;
    int *ptrL=&last;

    find(name , ptrF , ptrL);

    cout<<first<<" "<<last;

}

void find(string name, int *first , int *last){
    int f =-1, l=-1;
    for (int i=0 , n=name.size() ; i<n ; i++){
        if (name[i]=='a' || name[i]=='A'){
            if (f<0) f=l=i;
            else l=i;
        } 
    }
    
    *first=f;
    *last=l;
    return ;
}