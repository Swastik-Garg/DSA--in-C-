//C++ Program to
//a decimal number
//into Binary number

#include<iostream>
using namespace std;

int DectoBinary(int num){
    int ans = 0;
    int pow = 1;
    while(num>0){
        int rem = num%2;
        num /= 2;
        ans += (rem*pow);
        pow *= 10;
    }

    return ans; //Binar Number
}

int main(){
    int n = 50;
    cout<<"The Binary number of "<<n<<" is : "<<DectoBinary(n)<<endl;

    //For n numbers
    for(int i=1; i<=10; i++){
        cout<<"The Binar number of "<<i<<" is : "<<DectoBinary(i)<<endl;
    }
    return 0;
}