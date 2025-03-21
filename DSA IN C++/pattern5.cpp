//C++ Program to print
//the traingle pattern
//for stars

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many lines of triangle pattern you want to print: ";
    cin>>n;


    // This is my logic
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Shradha Didi's Logic
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}