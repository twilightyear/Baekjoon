#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long a,b;
	cin >> a >> b;

	if(a%2==1 && b%2==1){
		cout << min(a,b) << '\n';
	} else {
		cout << 0 << '\n';
	}
	return 0;
}