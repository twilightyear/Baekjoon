#include <iostream>
using namespace std;

int main(){
	int n; 
	cin >> n;

	long long result = 1;

	for(int i=1;i<=n;i++){
		result = result*i;
	}

	cout << result/604800 << '\n';

	return 0;
}