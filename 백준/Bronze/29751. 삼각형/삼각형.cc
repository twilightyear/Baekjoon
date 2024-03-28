#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double w,h;

	cin >> w >> h;

	cout << fixed << setprecision(1) << (w*h)*0.5 << endl;
	return 0;
}