#include <iostream>
using namespace std;

int main(){
	unsigned long long int m,k;

	cin >> m >> k;

	if (m%k==0){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}