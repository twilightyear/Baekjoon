#include <iostream>
using namespace std;

int main(){
	double a,b,c;
	int x;
	cin >> a >> b >> c;
	if(a*b/c > a/b*c){
		x = a*b/c;
	} else {
		x = a/b*c;
	}

	cout << x << '\n';
	return 0;
}