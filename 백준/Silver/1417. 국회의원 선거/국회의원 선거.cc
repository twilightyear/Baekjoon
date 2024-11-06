#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,num,cnt=0;
	vector<int> v;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> num;
		v.push_back(num);
	}

	int max_index;

	while(1){
		max_index=1;
		for(int i=1;i<n;i++){
			if(v[i]>v[max_index]){
				max_index = i;
			}
		}

		if(v[0]>v[max_index]){
			break;
		}

		v[0]++;
		v[max_index]--;
		cnt++;
	}

	cout << cnt << '\n';

	return 0;
}