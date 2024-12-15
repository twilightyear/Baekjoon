#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;

	int MAX = max(A,max(B,C));

	if((A+B+C-MAX) == MAX){
		cout << 1 << '\n';
	} else if((A*B*C/MAX)==MAX){
		cout << 2 << '\n';
	} else {
		cout << 3 << '\n';
	}
	return 0;
}