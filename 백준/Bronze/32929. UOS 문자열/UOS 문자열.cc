#include <iostream>
#include <cassert>
using namespace std;

int main(){
	unsigned int n;
	cin >> n;

	assert(n>=1 && 1000000000>=n);

	if (n%3==1){
		cout << "U\n";
	} else if (n%3==2){
		cout << "O\n";
	} else if  (n%3==0){
		cout << "S\n";
	}
	return 0;
}