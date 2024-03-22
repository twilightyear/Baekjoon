#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e;
	f = (pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2)+pow(e,2));


	cout << f%10 << endl;
	return 0;
}