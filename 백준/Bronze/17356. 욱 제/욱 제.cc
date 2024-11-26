#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){
	double A,B,C;
	cin >> A >> B;

	C = (B-A)/400;

	cout << setprecision(20) << 1/(1+pow(10,C)) << '\n';
	return 0;
}