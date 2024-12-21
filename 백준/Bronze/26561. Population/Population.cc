#include <iostream>
using namespace std;

int main(){
	int cnt,pop,t,b,d;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> pop >> t;
		b = t/4;
		d = t/7;

		pop+=(b-d);
		cout << pop << '\n';
	}
	return 0;
}