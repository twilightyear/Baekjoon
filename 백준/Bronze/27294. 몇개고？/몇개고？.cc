#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(b==0 && 12 <= a && a <= 16){
		cout << "320" << '\n';
	} else {
		cout << "280" << '\n';
	}
	return 0;
}