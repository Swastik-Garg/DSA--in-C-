//C++ Program to
//make pointer of a 
//class to store object address

#include<iostream>
using namespace std;

class hello{
    int r,im;
    public:
    void getdata(){
        cout<<"Real No. is: "<<r<<endl;
        cout<<"Imaginery No. is: "<<im<<endl;
    }
    int input(int a, int b){
        r = a;
        im = b;
    }
};

int main(){
    hello h;
    hello *p = &h;
    (*p).input(3,4);
    (*p).getdata();
    h.getdata();
    return 0;

}