//C++ Program to
//print pyramid of inverted
//triangle pattern for numbers

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many lines you want to print : ";
    cin>>n;
    
    //Shradha Didi's Logic
    for(i=0; i<n; i++){

        //For Spaces
        for(j=0; j<i; j++){
            cout<<" ";
        }
        
        //For Numbers
        for(j=0; j < (n-i); j++)  //Must put brackets as sometimes it shows error
        {
            cout<< (i+1) << " ";
        }
        cout<<endl;
    }
    return 0;
}