//C++ Program to 
//create array of
//object 

#include<iostream>
using namespace std;

class hello{
    int r,im;
    public:
    void getdata(){
        cout<<"Real No. is: "<<r<<endl;
        cout<<"Imaginery No. is: "<<im<<endl;
    }
    int input(){
        cout<<"Enter any real no.: ";
        cin>>r;
        cout<<endl<<"Enter any imaginery number: ";
        cin>>im;
        cout<<endl;
    }
};

int main(){
    hello a[3];
    int i;
    for(i=0; i<3; i++){
        a[i].input();
    }

    for(i=0; i<3; i++){
        a[i].getdata();
    }
    return 0;
}