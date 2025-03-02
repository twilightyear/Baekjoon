#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double w,h;
	cin >> w >> h;
	double result = (w+h)-sqrt(w*w+h*h);

	cout << fixed << setprecision(6) << result << '\n';
	return 0;
}