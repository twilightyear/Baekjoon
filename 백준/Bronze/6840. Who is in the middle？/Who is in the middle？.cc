#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;

	if ((b<=a and a<=c) or (c<=a and a<=b)){
		cout << a << endl;
	} else if ((a<=b and b<=c) or (c<=b and b<=a)){
		cout << b << endl;
	} else if ((b<=c and c<=a) or (a<=c and c<=b)){
		cout << c << endl;
	}
	return 0;
}