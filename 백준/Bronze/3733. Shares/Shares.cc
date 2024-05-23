#include <iostream>
using namespace std;

int main(){

	int N,x,S;

	while (scanf("%d %d", &N, &S) == 2){

		cout << S/(N+1) << endl;
	}

	return 0;
}