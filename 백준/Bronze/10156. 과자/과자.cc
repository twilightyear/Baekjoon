#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a*b-c<0){
		cout << 0 << '\n';
	} else {
		cout << a*b-c << '\n';
	}
	
	return 0;
}