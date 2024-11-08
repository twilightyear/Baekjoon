#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,q,r;
	int x,y;
	cin >> x >> y;

	a = 100-x;
	b = 100-y;
	c = 100-(a+b);
	d = a*b;

	q = d/100;
	r = d%100;

	cout << a << " " << b << " " <<  c << " " <<  d << " " <<  q << " " <<  r << '\n';
	cout << c+q << " " << r << '\n';
}