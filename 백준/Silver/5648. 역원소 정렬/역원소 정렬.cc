#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	long long n;
	string a;
	vector<long long> v;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> a;
		reverse(a.begin(),a.end());
		v.push_back(stol(a));
	}

	sort(v.begin(),v.end());

	for(long long l : v){
		cout << l << '\n';
	}


	return 0;
}