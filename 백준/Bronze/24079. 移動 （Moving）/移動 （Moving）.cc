#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	int time = x*60 + y*60;
	int last = z*60 + 30;

	if (time<=last){
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}

	return 0;
}