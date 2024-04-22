#include <iostream>
using namespace std;

int main(){
	int cnt;
	int a,x,b;
	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> a >> b >> x;
		cout << a * (x-1) + b << endl;
	}

	return 0;
}