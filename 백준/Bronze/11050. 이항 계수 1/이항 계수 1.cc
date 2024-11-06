#include <iostream>
using namespace std;

int factorial(int n){
	int val = 1;
	for(int i=1;i<=n;i++){
		val*=i;
	}
	return val;
}

float nCk(int n, int k){
	return factorial(n)/(factorial(n-k)*factorial(k));
}

int main(){
	int n,k;
	cin >> n >> k;
	cout << nCk(n,k) << '\n';
	return 0;
}