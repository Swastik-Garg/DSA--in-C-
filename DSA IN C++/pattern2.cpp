//C++ Program to
//print square pattern 
//of alphabets

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"How many Lines you want to print: ";
    cin>>n;
    cout<<"\nHow many numbers you want to get in a particular line: ";
    cin>>m;
    for(int i=1; i<=n; i++){
        char ch = 'A'; //ASCII Code value is 65 and for B is 66
        for(int j=1; j<=m; j++){
            cout <<ch<<" ";
            ch = ch + 1; //Complier converts A into ASCII Code for addition
        }
        cout<<endl;
    }
    return 0;
}