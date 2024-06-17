#include <iostream>
using namespace std;

int main(){
	int a,b,c;

	cin >> a >> b >> c;

	if (a==60 and b==60 and c==60){
		cout << "Equilateral" << endl;
	} else if (a+b+c==180 and ((a==b and b!=c) or (a==c and c!=b) or (b==c and c!=a))){
		cout << "Isosceles" << endl;
	} else if (a+b+c==180 and (a!=b and b!=c)){
		cout << "Scalene" << endl;
	} else {
		cout << "Error" << endl;
	}
	return 0;
}