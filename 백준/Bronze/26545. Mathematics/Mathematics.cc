#include <iostream>
using namespace std;

int main(){

	int cnt,sum;
	int total = 0;
	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> sum;
		total += sum;
	}

	cout << total << endl;
	return 0;
}