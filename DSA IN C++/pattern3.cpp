//C++ Program tp
//to print square pattern
//of increasing number (not fixed)

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many numbers you want to print : ";
    cin>>n;
    int num = 1;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}