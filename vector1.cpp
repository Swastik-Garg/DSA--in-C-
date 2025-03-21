//C++ Program to see
//various functions of vectors

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec; //empty
    cout<<"The size of vector is : "<<vec.size()<<endl;
    vec.push_back(5); //adds an element in vector
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(20);
    cout<<"the size of vector after pushing an element is: "<<vec.size()<<endl;

    //To check values in vector
    cout<<"The elements in vector after pushing elements are: \n";
    for(int i:vec){
        cout<<i<<endl;
    }

    vec.pop_back(); //remove the element from last index of vector
    cout<<"The pop function is performed successfully"<<endl;
    cout<<"The elements in vector after pop function are: \n";
    for(int i:vec){
        cout<<i<<endl;
    }

    cout<<"The first element of vector is: "<<vec.front()<<endl;  //Gives first element of vector
    cout<<"The last element of vector is: "<<vec.back()<<endl; //Gives last element of vector
    cout<<"The value at 1 index is: "<<vec.at(1); //Gives value of vector at particular index
    return 0;
}