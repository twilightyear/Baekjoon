#include <iostream>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	long n;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		cout << n*n << '\n';
	}
	return 0;
}