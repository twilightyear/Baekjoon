#include <iostream>
using namespace std;

int main(){
	int n;

	cin >> n;

	n%=8;

	if (n>5 or n==0){
		cout << (10-n)%8 << '\n';
	} else {
		cout << n << '\n';
	}
	
	return 0;
}