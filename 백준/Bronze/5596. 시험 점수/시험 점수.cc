#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f,g,h;
	cin >> a >> b >> c >> d;
	cin >> e >> f >> g >> h;

	if(a+b+c+d>=e+f+g+h){
		cout << a+b+c+d << endl;
	} else {
		cout << e+f+g+h << endl;
	}
	return 0;
}