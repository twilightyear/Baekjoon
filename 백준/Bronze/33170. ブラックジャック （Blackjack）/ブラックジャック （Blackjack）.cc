#include <iostream>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;

	if(A+B+C<=21){
		cout << 1 << '\n';
	} else {
		cout << 0 << '\n';
	}
	return 0;
}