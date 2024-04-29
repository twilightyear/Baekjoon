#include <iostream>
using namespace std;

int main(){
	int ax,ay,az,bx,by,bz;

	cin >> ax >> ay >> az;
	cin >> bx >> by >> bz;

	cout << bx-az << ' ' << by/ay << ' ' << bz-ax << endl;
	return 0;
}