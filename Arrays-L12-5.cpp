#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int sum=0;
    int sum2=0;

    //using for-each loop
    for (int ele:array){
        sum+=ele;
    }
    cout<<sum<<endl;

    //using for loop
    for (int i=0 ; i<7 ; i++){
        sum2+=array[i];
    }
    cout<<sum2<<endl;
}