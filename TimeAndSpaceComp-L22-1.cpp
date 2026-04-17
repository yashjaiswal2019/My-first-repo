// using for loop
#include <iostream>
using namespace std;

int sumInRange (int x , int y);

int sumInRangeOptimised (int x , int y);

int main()
{
    int x=1 , y=100000000;
    
    int sum2=sumInRangeOptimised(x , y);
    int sum=sumInRange (x ,y);
   
    cout<<sum<<endl<<sum2<<endl;
}

int sumInRange (int x , int y){
    int sum=0;
    for (int i=x ; i<=y ; i++){
        sum+=i;
    }
    return sum;
}

int sumInRangeOptimised (int x , int y){
    int n = y-x+1;
    int a=x;
    int sum=((n)*(x+y))/2;
    return sum;
}