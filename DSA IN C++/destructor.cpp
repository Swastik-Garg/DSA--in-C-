//C++ Program to 
//demonstrate the use of
//destructors and constructors

#include<iostream>
using namespace std;

static int count = 0; //Making fixed value
class test{
    public:
    test(){  //Constructor
        count++;
        cout<<"Object created is: "<<count<<endl;
    }
    ~ test(){ //Destructor
        cout<<"Object destroyed is: "<<count<<endl;
        count--;
    }
};

int main(){
    test t1,t2,t3,t4;
    return 0;
}