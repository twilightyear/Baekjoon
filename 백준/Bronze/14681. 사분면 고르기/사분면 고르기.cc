#include <iostream>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;

	if (x >1000 or x<-1000 or x == 0 or y >1000 or y<-1000 or y == 0){
		cout << "조건 : [ (−1000 ≤ x ≤ 1000; x ≠ 0) (−1000 ≤ y ≤ 1000; y ≠ 0) ]" << endl;
	}

	if (x > 0 and y > 0){
		cout << 1 << endl;
	} else 	if (x < 0 and y > 0){
		cout << 2 << endl;
	} else 	if (x < 0 and y < 0){
		cout << 3 << endl;
	} else 	if (x > 0 and y < 0){
		cout << 4 << endl;
	}
	return 0;
}