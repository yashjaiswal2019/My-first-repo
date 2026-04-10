#include <iostream>
using namespace std;

int main()
{
    int arr[]={3, 1 , 2, 4 , 0, 6};
    cout<<"for which value we have to find the triplets : ";

    int size =sizeof(arr)/sizeof(arr[0]);

    int x;
    cin>>x;
    int ans=0;

    for (int i=0 ; i<size ; i++){
        for (int j=i+1 ; j<size ; j++){
            for (int k=j+1 ; k<size ; k++){
                if (arr[i]+arr[j]+arr[k]==x) ans++;
            }
        }
    }
    cout<<ans;
}