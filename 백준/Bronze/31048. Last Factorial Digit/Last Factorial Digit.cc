#include <iostream>
using namespace std;

int cal(int n){
	int r=1;
	for(int i=n;i>0;i--){
		r*=i;
		r%=10;
	}
	return r;
}

int main(){
	int cnt,val;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> val;
		cout << cal(val) << '\n';
	}
	return 0;
}