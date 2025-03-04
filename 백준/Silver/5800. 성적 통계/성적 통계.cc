#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt,n,val,max,min,lg;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		vector<int> v;
		cin >> n;

		for(int j=0;j<n;j++){
			cin >> val;
			v.emplace_back(val);
		}

		sort(v.begin(),v.end());

		min = v[0];
		max = v[n-1];

		lg=0;

		for(int k=1;k<n;k++){
			if(v[k]-v[k-1]>lg){
				lg = v[k]-v[k-1];
			}
		}

		cout << "Class " << i+1 << '\n';

		cout << "Max " << max << ", Min " << min << ", Largest gap " << lg << '\n';

	}
	return 0;
}