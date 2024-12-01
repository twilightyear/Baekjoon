#include <iostream>
using namespace std;

int main(){
	int S,F;
	cin >> S >> F;

	if(S>F){
		cout << "flight\n";
	} else {
		cout << "high speed rail\n";
	}

	return 0;
}