#include <iostream>
using namespace std;

int main(){

	int A,B;
	cin >> A >> B;

	if(A+(B*7)<=30){
		cout << 1 << '\n';
	} else {
		cout << 0 << '\n';
	}
	return 0;
}