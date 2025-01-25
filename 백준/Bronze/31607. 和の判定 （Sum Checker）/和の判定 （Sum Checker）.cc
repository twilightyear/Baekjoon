#include <iostream>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;

	if(A>=B && A>=C){
		if(B+C==A){
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	} else if(B>=A && B>=C){
		if(A+C==B){
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	} else if(C>=A && C>=B){
		if(A+B==C){
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	}
	return 0;
}