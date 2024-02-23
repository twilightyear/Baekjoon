#include <iostream>
using namespace std;

int main(){
	int year;

	cin >> year;

	if ( year <0 or year>= 4000){
		cout << "조건 : [ 연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다. ]" << endl;
		exit(0);
	}

	if (year%4 == 0 and year%100 != 0 or year%400 == 0){
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}