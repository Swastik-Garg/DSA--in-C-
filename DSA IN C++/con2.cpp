//C++ Program to 
//convert binary number
//into decimal number

#include<iostream>
using namespace std;

int BintoDec(int num){
    int ans = 0;
    int pow = 1;
    while(num>0){
        int rem = num%10;
        ans += (rem*pow);
        num /= 10;
        pow *= 2;
    }
    return ans; //Decimal NUmber
}

int main(){
    int n;
    cout<<"Enter a valid Binay number: ";
    cin>>n;
    cout<<"\nThe Decimal number of "<<n<<" is : "<<BintoDec(n)<<endl;
    return 0;
}