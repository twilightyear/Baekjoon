#include <iostream>
using namespace std;

int main(){
	int result=0;
	int P,C;
	cin >> P >> C;

	if(P>C){
		result+=500;
	}
	result+=50*P;
	result-=10*C;

	cout << result << '\n';
	return 0;
}
