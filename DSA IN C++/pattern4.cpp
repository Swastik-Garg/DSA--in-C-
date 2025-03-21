//C++ Program tp
//to print square pattern
//of increasing alphabets (not fixed)

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many numbers you want to print : ";
    cin>>n;
    char ch = 'A';  //ASCII Code value is 65 and for B is 66
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<ch<<" ";
            ch++;  //In this point, again compiler use ASCII Code for addition
        }
        cout<<endl;
    }
    return 0;
}