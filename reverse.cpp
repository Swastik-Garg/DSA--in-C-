//C++ Program to reverse
// the given array elements

#include<iostream>
using namespace std;

int main(){
	int a[5],i;
	int n=5;
	cout<<"Enter the 5 values of elements: \n";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"\nThe elements in an array before reversing are :\n";
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nThe elements in an array after reversing are: \n";
	for(i=n-1; i>=0; i--){
		cout<<a[i]<<" ";
	}
	return 0;
}
