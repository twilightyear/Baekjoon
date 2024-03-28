#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	cin >> name;

	if (name == "NLCS"){
		cout << "North London Collegiate School" << endl;
	} else if (name == "BHA"){
		cout << "Branksome Hall Asia" << endl;
	} else if (name == "KIS"){
		cout << "Korea International School" << endl;		
	} else if (name == "SJA"){
		cout << "St. Johnsbury Academy" << endl;		
	}
	return 0;
}