//C++ Program to 
//demonstrate the use 
//of static member function

#include<iostream>
using namespace std;

class demo{
    int x;
    static int y;
    public:
    void getdata(int a){
        x = a;
        y = y+1;
    }
    void putdata(){
        cout<<"x = "<<x<<"\ny = "<<y;
    }
    static void abc(){
        cout<<"\nThe value of y is: "<<y;
    }
};

int demo::y;

int main(){
    demo aa;
    aa.getdata(10);
    aa.putdata();
    demo::abc();
    return 0;
}