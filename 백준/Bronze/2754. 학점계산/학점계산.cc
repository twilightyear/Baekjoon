#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;

	cin >> word;

	if (word == "A+"){
		cout << 4.3 << endl;
	} else if (word == "A0"){
		cout << "4.0" << endl;
	} else if (word == "A-"){
		cout << 3.7 << endl;
	} else if (word == "B+"){
		cout << 3.3 << endl;
	} else if (word == "B0"){
		cout << "3.0" << endl;
	} else if (word == "B-"){
		cout << 2.7 << endl;
	} else if (word == "C+"){
		cout << 2.3 << endl;
	} else if (word == "C0"){
		cout << "2.0" << endl;
	} else if (word == "C-"){
		cout << 1.7 << endl;
	} else if (word == "D+"){
		cout << 1.3 << endl;
	} else if (word == "D0"){
		cout << "1.0" << endl;
	} else if (word == "D-"){
		cout << 0.7 << endl;
	} else if (word == "F"){
		cout << "0.0" << endl;		
	}

	return 0;
}