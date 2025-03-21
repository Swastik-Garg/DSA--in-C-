//C++ Program for deletion
// at a given position 
// of an index value

#include<iostream>
using namespace std;

int main(){
	int a[5],i,pos;
	int n=5;
	cout<<"Enter the 5 values of elements: \n";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"\nThe elements in an array before deletion are :\n";
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the position of which element you want to delete: ";
	cin>>pos;
	for(i=pos; i<n; i++){
		a[i] = a[i+1];
	}
	n--;
	cout<<"The elements in an array after deletion is:\n";
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
