#include <iostream>
using namespace std;

int main(){
	int A,B;
	cin >> A >> B;

	while(A-2>=0){
		if((B+1)>=A){
			cout << (2*A)-1 << '\n';
			break;
		} else {
			A--;
		}
	}

	return 0;
}