#include <iostream>
using namespace std;

int main(){
	double a,b;
	cin >> a >> b;

	double result = a-(a*(b/100));
	if(result>=100){
		cout << 0 << endl;
	} else {
		cout << 1 << endl;
	}
	return 0;
}