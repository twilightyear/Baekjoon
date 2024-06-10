#include <iostream>
using namespace std;

int main(){
	int antenna,eye;
	cin >> antenna >> eye;

	if (antenna>=3 and eye <= 4){
		cout << "TroyMartian" << endl;
	}
	
	if (antenna<=6 and eye >= 2){
		cout << "VladSaturnian" << endl;
	}

	if (antenna<=2 and eye <= 3){
		cout << "GraemeMercurian" << endl;
	}

	return 0;
}