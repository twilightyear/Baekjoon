#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	if (N<1 or N>9){
		cout << "조건 : [ 1 <=N <= 9 ]" << endl;
	}

	for (int count=1;count <=9;count++){
		cout << N << " * " << count << " = " << N*count << endl;
	}

	return 0;
}