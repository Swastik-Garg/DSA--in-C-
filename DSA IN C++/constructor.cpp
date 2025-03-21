//C++ Program to
//demonstrate the use
//of copy constructor

#include<iostream>
using namespace std;

class demo{
    int a;
    public:
    demo(){
        a = 7;
    }
    demo(demo &z){
        a = z.a;
    }
    int show(){
        cout<<"The value is: "<<a<<endl;
    }
};

int main(){
    demo aa;
    aa.show();
    demo bb(aa);
    bb.show();
    return 0;
}