#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	if(a<b){
		cout << -1 << '\n';
	} else {
		if((a+b)/2 + (a-b)/2==a && (a+b)/2 - (a-b)/2==b){
			cout << (a+b)/2 << ' ' << (a-b)/2 << '\n';
		} else {
			cout << -1 << '\n';
		}
	}

	return 0;
}