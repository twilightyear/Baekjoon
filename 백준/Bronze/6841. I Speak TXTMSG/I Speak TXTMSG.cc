#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;

	while(1){
		cin >> input;
		if (input == "TTYL"){
			cout << "talk to you later\n";
			break;
		} else if (input == "CU"){
			cout << "see you\n";
		} else if (input == ":-)"){
			cout << "I’m happy\n";
		} else if (input == ":-("){
			cout << "I’m unhappy\n";
		} else if (input == ";-)"){
			cout << "wink\n";
		} else if (input == ":-P"){
			cout << "stick out my tongue\n";
		} else if (input == "(~.~)"){
			cout << "sleepy\n";
		} else if (input == "TA"){
			cout << "totally awesome\n";
		} else if (input == "CCC"){
			cout << "Canadian Computing Competition\n";
		} else if (input == "CUZ"){
			cout << "because\n";
		} else if (input == "TY"){
			cout << "thank-you\n";
		} else if (input == "YW"){
			cout << "you’re welcome\n";
		} else {
			cout << input << '\n';
		}
	}
	return 0;
}