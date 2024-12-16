#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v;
	int N;

	for(int i=0;i<3;i++){
		cin >> N;
		v.push_back(N);
	}

	int max_index=0;
	for(int i=0;i<3;i++){
		if(v[max_index]<=v[i]){
			max_index=i;
		}
	}
	v[max_index] = 1;

	cout << max(v[0],max(v[1],v[2])) << '\n';

	return 0;
}