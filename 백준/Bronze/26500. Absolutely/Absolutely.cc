#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double n,x,y;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> x >> y;
		cout << fixed;
		cout << setprecision(1) << abs(y-x) << '\n';
	}
	return 0;
}