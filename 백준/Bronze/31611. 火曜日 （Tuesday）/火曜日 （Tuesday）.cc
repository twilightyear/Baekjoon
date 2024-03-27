#include <iostream>
using namespace std;

int main(){
	int x;

	cin >> x;
	while(x>2){
		x-=7;
	}

	if (x==2){
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
}