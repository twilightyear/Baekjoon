#include <iostream>
using namespace std;

int main(){
	int S,M,L;
	cin >> S >> M >> L;

	int val = S+(2*M)+(3*L);

	if(val>=10){
		cout << "happy\n";
	} else {
		cout << "sad\n";
	}
	return 0;
}