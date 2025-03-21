//C++ Program to print
//the traingle pattern
//for numbers

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"How many lines do you want to print: ";
    cin>>n;

    // This is my logic
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    //Shradha Didi's Logic
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}