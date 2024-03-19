#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	if (N>12 or N<0){
		exit(0);
	}

	if (N==0){
		cout << 1 << endl;
	} else if (N==1){
		cout << 1 << endl;
	} else if (N==2){
		cout << 2 << endl;
	} else if (N==3){
		cout << 6 << endl;
	} else if (N==4){
		cout << 24 << endl;
	} else if (N==5){
		cout << 120 << endl;
	} else if (N==6){
		cout << 720 << endl;
	} else if (N==7){
		cout << 5040 << endl;
	} else if (N==8){
		cout << 40320 << endl;
	} else if (N==9){
		cout << 362880 << endl;
	} else if (N==10){
		cout << 3628800 << endl;
	} else if (N==11){
		cout << 39916800 << endl;
	} else if (N==12){
		cout << 479001600 << endl;
	}

	return 0;
}