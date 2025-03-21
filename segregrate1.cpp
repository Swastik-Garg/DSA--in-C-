//C++ Program to
//segregrate even and odd 
//numbers in an array

#include<iostream>
using namespace std;

int main(){
    int a[6] = {5,6,7,3,8,2};
    int n = 6;
    int s = 0;
    int e = n-1;
    while(s<e){
        if(a[s]%2 == 0){
            s++;
        }
        else if(a[s]%2 != 0){
            swap(a[s],a[e]); //swapping odd number with even number
            e--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}