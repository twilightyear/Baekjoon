#include <iostream>
using namespace std;

int main(){
	int p1,p2,p3,p4,x,y,r;
	cin >> p1 >> p2 >> p3 >> p4 >> x >> y >> r;
	if(x==p1){
		cout << 1 << '\n';
	} else if(x==p2){
		cout << 2 << '\n';
	} else if(x==p3){
		cout << 3 << '\n';
	} else if(x==p4){
		cout << 4 << '\n';
	} else {
		cout << 0 << '\n';
	}
	return 0;
}