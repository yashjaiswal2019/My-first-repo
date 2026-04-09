// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose absolute difference is exactly x.



#include <iostream>
#include <vector>
using namespace std;

int absolutevalue(int a){
    if (a>=0) a=a;
    else a*=-1;
    return a;
}

int main()
{
    vector<int> arr={5, 10, 15, 20, 26};
    int x;
    
    cout<<"Please put in the required value"<<endl;
    cin>>x;

    int n=arr.size();

    vector<int> ans;
    bool flag=false;
    if (absolutevalue(arr[0]-arr[1])>x) flag=false;
    else {
        for (int i=0 ; i<n ; i++){
            for (int j=0 ; j<n ; j++){
                if (absolutevalue(arr[j]-arr[i])==x){
                    flag = true;
                    cout<<flag<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<flag<<endl<<"no such values exist"<<endl;
}