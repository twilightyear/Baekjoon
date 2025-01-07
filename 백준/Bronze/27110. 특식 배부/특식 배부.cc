#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N,A,B,C;
	cin >> N >> A >> B >> C;

	cout << min(N,A) + min(N,B) + min(N,C) << '\n';
	return 0;
}
