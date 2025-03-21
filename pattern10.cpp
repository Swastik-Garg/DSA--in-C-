//C++ Porgram to print
//the reverse triangle 
//pattern of numbers

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many lines you want to print: ";
    cin>>n;

    //My and Shradha Didi's Logic
    for(i=0; i<n; i++){
        for(j=i+1; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}