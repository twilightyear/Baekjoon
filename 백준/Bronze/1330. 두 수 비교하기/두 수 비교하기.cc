#include <iostream>
using namespace std;

int main(){

	int a,b;

	cin >> a >> b;

	if (-10000 > a or a > 10000 or -10000 > b or b > 10000){
		cout << "조건 : [ -10,000 ≤ A, B ≤ 10,000 ]" << endl;
	}


	if (a > b){
		cout << ">" << endl;
	} else if (a < b){
		cout << "<" << endl;
	} else if (a == b){
		cout << "==" << endl;
	}

	return 0;
}