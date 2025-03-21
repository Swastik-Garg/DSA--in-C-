//C++ program to
//Hollow Diamond Pattern

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"How many lines you want to print: ";
    cin>>n;

    //Shradha Didi's Logic 
    //only for top part
    for(i=0; i<n; i++){

        //For Spaces before star
        for(j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        cout<<"*";

        if(i != 0){
            //For spaces after star
            for(j=0; j<(2*i-1); j++){
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }


    //only for bottom part
    for(i=0; i<(n-1); i++){

        //For spaces before star
        for(j=0; j<(i+1); j++){
            cout<<" ";
        }

        cout<<"*";

        if(i != n-2){
            //For spaces after star
            for(j=0; j<(2*(n-i)-5); j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}