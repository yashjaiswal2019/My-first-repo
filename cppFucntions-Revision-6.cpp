//Given radius of a circle. Write a function to print the area and circumference of the circle.

#include <iostream>
using namespace std;

double area(int r){
    double area=3.14*r*r;
    return area;
}

double circumference(int r){
    double circumference= 2*3.14*r;
    return circumference;
}

int main(){
    int r;
    cin>>r;

    cout<<"Area = "<<area(r)<<" sq. meters"<<endl;
    cout<<"circumference = "<<circumference(r)<<" meters"<<endl;

    return 0;
}