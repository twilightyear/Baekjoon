#include <iostream>
using namespace std;

int main(){
	int h,m;

	cin >> h >> m;

	if (h>23 or h<0 or m>59 or m<0){
		cout << "조건 : [ (0 ≤ H ≤ 23, 0 ≤ M ≤ 59) ]" << endl;
	}

	if (m>=45){
		cout << h << " " << m-45 << endl;
	} else if (h == 0 and m<45){
		cout << 23 << " " << m+15 << endl;
	} else if (h != 0 and m<45){
		cout << h-1 << " " << m+15 << endl;
	}

	return 0;
}