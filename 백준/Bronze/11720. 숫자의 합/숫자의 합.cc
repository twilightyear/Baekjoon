#include <iostream>
#include <string>
using namespace std;

int main(){
	int total = 0;
	int num;
	int plus;
	string number;

	cin >> num;
	if (num > 100 or num < 1){
		exit(0);
	}

	cin >> number;
	if (number.length() != num){
		exit(0);
	}

	for (int i=0;i<number.length();i++){
		total += number[i] - '0';
	}

	cout << total << endl;


	return 0;
}