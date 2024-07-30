#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> array;
	int n,value;
	int a=0,b=0;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> value;
		array.push_back(value);
	}

	sort(array.begin(),array.end());

	for(int i=n/2;i<n;i++){
		a+=array[i];
	}

	for(int i=0;i<n/2;i++){
		b+=array[i];
	}

	cout << b << ' ' << a << '\n';

}