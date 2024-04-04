#include <iostream>
#include <string>
using namespace std;

int main(){
	string value;
	cin >> value;
	if (value == "M"){
		cout << "MatKor" << endl;
	} else if (value == "W"){
		cout << "WiCys" << endl;
	} else if (value == "C"){
		cout << "CyKor" << endl;
	} else if (value == "A"){
		cout << "AlKor" << endl;
	} else if (value == "$"){
		cout << "$clear" << endl;
	}

	return 0;
}
