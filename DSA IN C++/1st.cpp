#include<iostream>
using namespace std;

class A{
	public:
	static int x;
	A(){
		cout<<"Constructor is called"<<endl;
	}
};

int A::x = 2;

int main(){
	cout<<"Accessing static data member: "<<A::x;
	return 0;
}