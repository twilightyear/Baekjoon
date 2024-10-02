#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if (c<a or b<=c){
		cout << 0 << '\n';
	} else {
		cout << 1 << '\n';
	}
	return 0;
}