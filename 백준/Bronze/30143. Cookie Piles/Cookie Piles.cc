#include <iostream>
using namespace std;

int cookie(int N, int A, int D){
	return N*(2*A+(N-1)*D)/2;
}

int main(){
	int N,A,D;
	int cnt;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> N >> A >> D;
		cout << cookie(N,A,D) << '\n';
	}

	return 0;
}