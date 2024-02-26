#include <iostream>
using namespace std;

int main(){

	//입력
	int n,x,val;
	int list[10001];
	cin >> n >> x;

	//조건처리
	if (n<1 or x<1 or n>10000 or x>10000){
		exit(0);
	}

	for (int i=0;i<n;i++){

		//입력
		cin >> val;

		//조건처리
		if (val < 1 or val > 10000){
			exit(0);
		}

		list[i] = val;

	}

	for (int i=0;i<n;i++){
		if (list[i] < x){
			cout << list[i] << " ";
		}
	}
	cout << endl;
	return 0;
}