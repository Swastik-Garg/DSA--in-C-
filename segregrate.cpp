//C++ Program
//to segregrate through
//0 and 1 in an array


#include <iostream>
using namespace std;

int main() {
// Write C++ code here
int n= 6;
int s=0;
int e=n-1;
int arr[6]={1,0,1,0,1,0};
while(s<e){
if(arr[s]==0){
s++;
} else{
if(arr[e]==0){
swap(arr[s],arr[e]);
s++;
e--;
}else{
e--;
}
}
}
for(int i=0;i<6;i++){
cout<<arr[i]<<" ";
}
return 0;
}
