#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int A,B,C,M;
	cin >> A >> B >> C;
	M = max(A,max(B,C));
	cout << M*3-A-B-C << '\n';
	return 0;
}