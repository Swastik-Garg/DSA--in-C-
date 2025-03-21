// C++ Program to transverse to array
//Transverse means iterating
// or checking each element

#include<iostream>
using namespace std;

int main(){
	int a[5],i;
	cout<<"Enter the 5 elements in an array :\n";
	for(i=0; i<5; i++){
		cin>>a[i];
	}
	cout<<"\nThe elements in an array are: \n";
	for(i=0 ;i<5; i++){
		cout<<a[i]<<endl;  //To get a tab space between elements
	}
}
