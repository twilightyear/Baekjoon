#include <iostream>
using namespace std;

int main(){
	int ds,ys,dm,ym;
	cin >> ds >> ys >> dm >> ym;
	ds=ys-ds;
	dm=ym-dm;

	while(ds!=dm){
		if(ds<dm){
			ds+=ys;
		} else {
			dm+=ym;
		}
	}
	cout << ds << '\n';

	return 0;
}