#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,b,c,cnt;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> a >> b >> c;
		cout << min(a, min(b,c)) << '\n';
	}
	return 0;
}
