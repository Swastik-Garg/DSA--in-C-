//C++ Program to find 
//max and min number 
// in an array

#include<iostream>
using namespace std;
 
int main(){
	int a[5],i,max,min;
	//int a[5] = {12,43,56,87,2};
	cout<<"Enter the 5 values for array:\n";
	for(i=0; i<5; i++){
		cin>>a[i];
	}
	cout<<"\nThe elements in an array are:\n";
	for(i=0; i<5; i++){
		cout<<a[i]<<"\n"; //to print elements in new line
	}
	max = a[0];
	min = a[0];
	for(i=0; i<5; i++){
		if(max < a[i]){
			max = a[i];
		}
		else if(min > a[i]){
			min = a[i];
		}
	}
	cout<<"The maximum element in an array is : "<<max;
	cout<<"\n"<<"The minimum element in an array is :"<<min;
}

