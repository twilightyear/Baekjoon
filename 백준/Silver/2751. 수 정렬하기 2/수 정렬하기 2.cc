#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int count,num;
	vector<int> myVector;
	cin >> count;

	for (int i=0;i<count;i++){
		cin >> num;
		myVector.push_back(num);
	}

	sort(myVector.begin(),myVector.end());

	for (int i=0;i<count;i++){
		cout << myVector[i] << '\n';
	}

	return 0;
}