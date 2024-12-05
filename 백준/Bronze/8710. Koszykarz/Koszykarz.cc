#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double k,w,m;
	cin >> k >> w >> m;

	int result = ceil((w-k)/m);

	cout << result << '\n';
	return 0;
}