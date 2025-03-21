//C++ Program to 
//demonstrate the use of 
//friend function

#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public :
    void input(){
        cin>>a;
    }
    friend void max(A,B);  //making friend fn
};

class B{
    int b;
    public :
    void getdata(){
        cin>>b;
    }
    friend void max(A,B);
};

void max(A aa, B bb){
    if(aa.a > bb.b){
        cout<<aa.a<<" is greater than "<<bb.b;
    }
    else{
        cout<<bb.b<<" is greater than "<<aa.a;
    }
}

int main(){
    A aa;
    B bb;
    aa.input();
    bb.getdata();
    max(aa,bb); //calling friend fn
    return 0;
}