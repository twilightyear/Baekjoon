#include <iostream>
using namespace std;

int main(){
	int m,d;

	cin >> m >> d;

	if(m==2 and d==18){
		cout << "Special" << endl;
	} else if((m==2 and d>18) or (m>2)){
		cout << "After" << endl;
	} else {
		cout << "Before" << endl;
	}
	return 0;
}