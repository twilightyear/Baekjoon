#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double w,l;
	cin >> w >> l;

	double y = w*l;

	double aty = 4840.0;
	double cnt = 5.0;

	double acres = (double)y / aty;
	int r = ceil(acres/cnt);

	cout << r << '\n';

	return 0;
}