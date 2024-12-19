#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double c4,a3,a4,result;
	cin >> c4 >> a3 >> a4;
	result = ((229*324*c4*2)+(297*420*a3*2)+(210*297*a4))*0.000001;
	cout << fixed << setprecision(6) << result << '\n';
	return 0;
}