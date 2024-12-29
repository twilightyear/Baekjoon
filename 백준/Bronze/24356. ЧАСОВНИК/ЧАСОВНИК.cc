#include <iostream>
using namespace std;

int main(){
	int t1,t2;
	int m1,m2;
	cin >> t1 >> m1 >> t2 >> m2;
	int n = (t2*60+m2) - (t1*60+m1);
	
	if(n<0){
		n+=1440;
	}

	cout << n << " " << n/30 << '\n';
	return 0;
}