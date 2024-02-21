#include <iostream>
#include <cmath>

using namespace std;

int main(){

	long long a,b,c;

	cin >> a >> b >> c;

	if (a<1 or b<1 or c<1 or a>pow(10,12) or b>pow(10,12) or c>pow(10,12)){
		cout << "조건 : [ A, B, C (1 ≤ A, B, C ≤ 10^12) ] "<< endl;
	}

	cout << a+b+c << endl;

	return 0;
}