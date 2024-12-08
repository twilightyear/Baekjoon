#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double S, A, B;

	cin >> S >> A >> B;

	if(A>=S){
		cout << 250 << '\n';
	} else {
		cout << 250 + ceil((S-A)/B)*100 << '\n';
	}
	return 0;
}