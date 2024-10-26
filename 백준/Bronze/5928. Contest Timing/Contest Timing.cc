#include <iostream>
using namespace std;

int main(){
	int d,h,m;
	cin >> d >> h >> m;

	int result = m+h*60+d*60*24-(11+11*60+11*60*24);

	if(result < 0){
		cout << -1 << '\n';
	} else {
		cout << result << '\n';
	}
	return 0;
}