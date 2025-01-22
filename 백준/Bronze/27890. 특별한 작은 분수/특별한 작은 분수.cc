#include <iostream>
using namespace std;

int main(){
	int x0, N;
	cin >> x0 >> N;

	while(N>0){
		if(x0%2==0){
			x0 = (x0/2)^6;
		} else {
			x0 = (2*x0)^6;
		}
		N--;
	}

	cout << x0 << '\n';
	return 0;
}