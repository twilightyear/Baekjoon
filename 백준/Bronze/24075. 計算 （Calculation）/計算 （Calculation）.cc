#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	if(a+b>=a-b){
		cout << a+b << '\n';
		cout << a-b << '\n';
	} else {
		cout << a-b << '\n';
		cout << a+b << '\n';
	}
	return 0;
}