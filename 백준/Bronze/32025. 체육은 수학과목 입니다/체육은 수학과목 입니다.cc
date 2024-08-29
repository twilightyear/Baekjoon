#include <iostream>
using namespace std;

int main(){
	float w,h;
	cin >> w >> h;
	cout << fixed;
	cout.precision(0);

	if(w>=h){
		cout << (h/2)*100 << '\n';
	} else {
		cout << (w/2)*100 << '\n';
	}
	return 0;
}