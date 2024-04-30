#include <iostream>
using namespace std;

int main(){
	int a,b,result;
	cin >> a >> b;


	if (a>=20){
		result = (24-a)+b;
	} else {
		result = b-a;
	}

	cout << result << endl;
	return 0;
}