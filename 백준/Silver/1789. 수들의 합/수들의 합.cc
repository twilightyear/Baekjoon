#include <iostream>
using namespace std;

int main(){
	unsigned long s;
	unsigned long n=1;

	cin >> s;
	
	while(1){
		if(((n*n+n))<=2*s){
			n++;
		} else {
			n--;
			break;
		}
	}

	cout << n << '\n';

	return 0;
}