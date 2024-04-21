#include <iostream>
#include <string>
using namespace std;



int main(){
	string word = "WelcomeToSMUPC";
	int index;

	cin >> index;

	cout << word[(index-1)%14] << endl;



	return 0;
}