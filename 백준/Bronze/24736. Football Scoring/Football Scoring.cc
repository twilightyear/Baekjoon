#include <iostream>
using namespace std;

int main(){
	int t1,s1,f1,p1,c1,t2,s2,f2,p2,c2;

	cin >> t1 >> s1 >> f1 >> p1 >> c1 >> t2 >> s2 >> f2 >> p2 >> c2;

	cout << t1*6+s1*3+f1*2+p1*1+c1*2 << ' ' << t2*6+s2*3+f2*2+p2*1+c2*2<< endl;
	return 0;
}