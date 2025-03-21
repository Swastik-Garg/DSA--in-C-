#include<iostream>
using namespace std;
int main(){
	int n = 5;
	int arr[5] = {2, 7, 11, 15, 27};
	int target = 26;
	int s = 0;
	int e = n - 1;
	while (s < e) {
		if (arr[s] + arr[e] == target) {
			cout<<"Pair found: "<<arr[s]<<","<<arr[e]<<endl;
			return 1;
		}
		else if (arr[s] + arr[e] < target) {
			s++;
		}
		else {
			e--;
		}
	}
	cout<<"No pair found"<<endl;
	return 0;
}
