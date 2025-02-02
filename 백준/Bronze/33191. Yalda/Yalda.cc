#include <iostream>
using namespace std;

int main(){
	int b;
	int w,p,n;

	cin >> b >> w >> p >> n;

	if(b<w && b<p && b<n){
		cout << "Nothing\n";
	} else if(b>=w){
		cout << "Watermelon\n";
	} else if(b>=p){
		cout << "Pomegranates\n";
	} else if(b>=n){
		cout << "Nuts\n";
	}
	return 0;
} 