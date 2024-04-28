#include <iostream>
using namespace std;

int main(){
	int cnt;
	double a,b,c;

	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> a>> b>>c;
		cout.precision(2);
		cout << fixed << '$'<< a*b*c << endl;
	}
	return 0;
}