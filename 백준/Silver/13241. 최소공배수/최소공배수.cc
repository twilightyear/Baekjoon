#include <iostream>
using namespace std;

int main(){
	long long int a,b,x,y,tmp;
	cin >> a >> b;

	x = a;
	y = b;

	while(y!=0){
		tmp = y;
		y = x%y;
		x = tmp;

	}

	cout << a/x*b << '\n';

	return 0;
}