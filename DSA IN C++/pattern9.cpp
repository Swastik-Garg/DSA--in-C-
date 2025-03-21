//C++ Program to print
//the traingle pattern
//for numbers (not fixed)

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"How many lines do you want to print: ";
    cin>>n;

    //My Logic
    // for(i=1; i<=n; i++){
    //     int num = 1;
    //     for(j=1; j<=i; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    //Shradha Didi's Logic
    for(i=0; i<n; i++){
        for(j=1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}