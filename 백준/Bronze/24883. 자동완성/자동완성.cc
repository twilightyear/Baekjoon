#include <iostream>
#include <string>
using namespace std;

int main(){
	string value;
	cin >> value;
	if (value == "N" or value == "n"){
		cout << "Naver D2" << endl;
	} else {
		cout << "Naver Whale" << endl;
	}

	return 0;
}
