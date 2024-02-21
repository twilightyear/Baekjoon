#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
	int a,b;

	//1
	cin >> a;

	//2
	cin >> b;

	//3
	cout << a * (b%10) << endl;

	//4
	cout << (a * (b%100) - a * (b%10))/10 << endl;

	//5
	cout << a * (b/100) << endl;

	//6
	cout << a * b << endl;

	return 0;
}