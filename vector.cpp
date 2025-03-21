#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec (5,1); //Create size of vector to and give 1 to each 
    vector<char> vect {'a','b','c','d','e'};

    cout<<"The integer type of vector stores below values:\n";
    for( int i : vec){  //i should of same type of vector
        cout<<i<<endl;
    }
    
    cout<<"The character type of vector store below values:\n";
    for(char j : vect){
        cout<<j<<endl;
    }
    return 0;
}