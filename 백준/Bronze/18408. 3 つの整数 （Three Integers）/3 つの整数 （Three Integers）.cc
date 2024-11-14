#include <iostream>
using namespace std;

int main(){
	int a;
	int x=0;
	int y=0;

	for(int i=0;i<3;i++){
		cin >> a;
		if(a==1){
			x++;
		} else {
			y++;
		}
	}

	if(x>y){
		cout << 1 << '\n';
	} else {
		cout << 2 << '\n';
	}
	return 0;
}