//C++ Program to swap

#include<iostream>
using namespace std;

//Using Third Variable
int main(){
    int x,y,temp;
    cout<<"Enter any two number you want to swap: ";
    cin>>x>>y;
    cout<<"\nValues before swapping are: "<<endl;
    cout<<"x = "<<x<<endl<<"y = "<<y;
    temp = x;
    x = y;
    y = temp;
    cout<<"The values after swapping are: "<<endl;
    cout<<"x = "<<x<<endl<<"y = "<<y; 
    return 0;
}


