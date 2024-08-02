#include <iostream>
using namespace std;

int C(int a, int b)
{
	if(a == b or b == 0){
		return 1; 
	} else {
		return C(a - 1, b - 1) + C(a - 1, b);
	}
}

int main(){
	int a,b;

	cin >> a >> b;

	cout << C(--a,--b) << '\n';
	
	return 0;
}