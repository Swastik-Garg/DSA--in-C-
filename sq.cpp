//C++ Program to 
//square a number using
//user-defined function

#include<iostream>
using namespace std;

int sq(int a){
    return a*a;
}

int main(){
    int x;
    cout<<"Enter the value of which you want to square: ";
    cin>>x;
    cout<<"The square of "<<x<<" is: "<<sq(x);
    return 0;
}