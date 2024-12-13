#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e,A,B;
	cin >> a >> b >> c >> d >> e >> A >> B;

	if(e>30){
		A = a+(21*(e-30)*b);
	} else A = a;

	if(e>45){
		B = c+(21*(e-45)*d);
	} else {
		B = c;
	}

	cout << A << " " << B << "\n";
	return 0;
}