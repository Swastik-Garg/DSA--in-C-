//C++ Program for insertion 
// of an element at specific
// postion in an array

#include<iostream>
using namespace std;

int main(){
	int a[5],i,pos,elem;
	int n=5;  //Size of an array 
	cout<<"Enter the 5 values of elements: \n";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"\nThe elements in an array before insertion are :\n";
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the position at which you want to insert: ";
	cin>>pos;
	cout<<"\nEnter the value of that element: ";
	cin>>elem;
	for(i=n-1; i>=pos; i--){
		a[i+1] = a[i];  // To make empty that specific index value box
	}
	a[pos] = elem; // Giving value to empty box of specific position
	n = n+1;
	cout<<"\nThe elements in an array after insertion are: \n";
	for(i=0; i<n; i++){
		cout<<a[i]<< " ";
	}
	return 0;
}
