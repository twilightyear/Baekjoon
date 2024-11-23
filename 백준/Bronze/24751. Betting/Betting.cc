#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double n;
	cin >> n;
	cout << fixed;
	cout << setprecision(10) << 100/n << '\n' << 100/(100-n) << '\n';

	return 0;
}