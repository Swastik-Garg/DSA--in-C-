//C++ Program to
//print Pyramid Pattern

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many lines you want to print: ";
    cin>>n;

    //Shradha Didi's Logic
    for(i=0; i<n; i++){

        //For Spaces
        for(j=0; j<(n-i-1); j++){
            cout<<" ";
        }

        //For frontend numbers
        for(j=1; j<=i+1; j++){
            cout<<j;
        }

        //For backend numbers
        for(j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}