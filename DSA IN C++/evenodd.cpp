//C++ Program to
//check whether a 
//number is even or odd

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any number: ";
    cin>>a;
    if(a%2 == 0){
        cout<<"The number is even number.";
    }
    else{
        cout<<"The number is odd number.";
    }
    return 0;
}