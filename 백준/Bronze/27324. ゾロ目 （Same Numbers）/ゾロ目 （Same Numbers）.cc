#include <iostream>
#include <string>
using namespace std;

int main(){
	string num;
	cin >> num;

	if (num[0] == num[1]){
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}