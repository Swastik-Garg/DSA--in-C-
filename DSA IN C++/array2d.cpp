#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    int i,j;
    int rowSum = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<"Enter the element: ";
            cin>>a[i][j];
        }
    }
    cout<<"\nThe 2D array is:\n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            rowSum = rowSum + a[i][j];
        }
        cout<<"The sum of "<<i<<" row is: "<<rowSum<<endl;
    }
    return 0;
}