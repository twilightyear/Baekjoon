#include <iostream>
using namespace std;

int main(){
	int N,A,B,E,F;

	cin >> A >> B >> N;

	for(int i=0;i<N;i++){
		cin >> E;

		if(E>=1000){
			cout << E << " " << 1000*A+(E-1000)*B << '\n';
		} else {
			cout << E << " " << E*A << '\n';
		}
	}
	return 0;
}