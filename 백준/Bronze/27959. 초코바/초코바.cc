#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;

	if (n>100 or n<1 or m<1 or m>10000){
		exit(0);
	}

	if ((n*100) >= m){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}