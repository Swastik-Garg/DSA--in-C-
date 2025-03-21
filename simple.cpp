//C++ Program to 
//find min and 
//max using function

#include<iostream>
using namespace std;

int maxNo(int a,int b){
    if(a>b){
        cout<<a<<" is greater than "<<b;
    }
    else{
        cout<<b<<" is greater than "<<a;
    }
}

int minNo(int a,int b){
    if(a<b){
        cout<<a<<" is lesser than "<<b;
    }
    else{
        cout<<b<<" is lesser than "<<a;
    }
}

int main(){
    int x,y;
    cout<<"Enter any numbers : ";
    cin>>x>>y;
    maxNo(x,y);
    cout<<endl;
    minNo(x,y);
}