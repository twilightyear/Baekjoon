#include <iostream>
using namespace std;

int cal(int N){
	return N*N*N;
}

int main(){
	int N;
	int result=0;
	cin >> N;

	while(N>0){
		result+=cal(N);
		N--;
	}

	cout << result << '\n';


	return 0;
}