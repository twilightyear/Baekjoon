#include <iostream>
using namespace std;

int main(){
	long long R,C,N,x,y;

	cin >> R >> C >> N;

	if(R%N>0){
		x = R/N+1;
	} else {
		x = R/N;
	}

	if(C%N>0){
		y = C/N+1;
	} else {
		y = C/N;
	}

	cout << x*y << '\n';
	return 0;
}