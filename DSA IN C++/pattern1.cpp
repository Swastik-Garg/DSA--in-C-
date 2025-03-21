//C++ Program to
//print square pattern
//of numbers

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"How many Lines you want to print: ";
    cin>>n;
    cout<<"\nHow many numbers you want to get in a particular line: ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout <<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}