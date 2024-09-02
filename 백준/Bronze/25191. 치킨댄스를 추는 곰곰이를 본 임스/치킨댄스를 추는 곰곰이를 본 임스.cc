#include <iostream>
using namespace std;

int main(){
	int chi,cok,be;
	cin >> chi >> cok >> be;

	if(chi<=cok/2+be){
		cout << chi << '\n';
	} else {
		cout << cok/2+be << '\n';
	}

	return 0;
}