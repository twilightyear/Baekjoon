#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,k,a,b;
	cin >> n >> k >> a >> b;

	cout << (n-1)*b + abs(1-k)*b << " " << (n-1)*a << '\n';
	return 0;
}