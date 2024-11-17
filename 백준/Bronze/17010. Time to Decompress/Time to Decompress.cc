#include <iostream>
using namespace std;

int main(){
	int cnt,n;
	char c;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> n >> c;
		for(int j=0;j<n;j++){
			cout << c;
		}
		cout << '\n';
	}
	return 0;
}