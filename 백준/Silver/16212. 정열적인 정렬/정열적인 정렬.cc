#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> array;
	int N,val;
	cin >> N;

	for(int i=0;i<N;i++){
		cin >> val;
		array.push_back(val);
	}

	sort(array.begin(),array.end());

	for(int i=0;i<N;i++){
		if(i!=N-1){
			cout << array[i] << " ";
		} else {
			cout << array[i] << '\n';
		}
	}
	return 0;
}