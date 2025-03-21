//C++ Program to
//check whether a 
//number is prime or not


#include<iostream>
using namespace std;

int main(){
    int n,i;
    bool isPrime = true;

    cout <<"Enter the number you want to check : ";
    cin >>n;
    for(i=2; i*i <= n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<"\nThe number "<<n<<" is a prime number";
    }
    else{
        cout<<"\nThe number "<<n<<" is a non-prime number";
    }
    return 0;
}