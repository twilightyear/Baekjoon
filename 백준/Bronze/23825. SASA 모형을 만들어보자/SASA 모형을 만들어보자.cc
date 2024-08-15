#include <iostream>
using namespace std;

int main(){
	int N,M,result;

	cin >> N >> M;

	if(N/2>=M/2){
		result = M/2;
	} else {
		result = N/2;
	}

	cout << result;

}