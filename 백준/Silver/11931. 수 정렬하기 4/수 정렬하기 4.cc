#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,num;
	vector<int> array;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> num;
		array.push_back(num);
	}

	sort(array.begin(),array.end(),greater<int>());

	for(int i=0;i<n;i++){
		if(i!=n-1){
			cout << array[i] << " ";
		} else {
			cout << array[i] << "\n";
		}
	}

	return 0;
}