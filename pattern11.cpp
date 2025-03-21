//C++ Porgram to print
//the floyd's triangle 
//pattern

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many lines you want to print: ";
    cin>>n;
    int num=1;

    //My and Shradha Didi's Logic
    for(i=0; i<n; i++){
        for(j=i+1; j>=1; j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }


}