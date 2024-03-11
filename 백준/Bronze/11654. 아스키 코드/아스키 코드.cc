#include <iostream>
#include <string>
using namespace std;

int main(){
	string message;
	cin >> message;

	for (int i=0;i<message.length();i++){
		cout << (int)message[i] << endl;
	}

	return 0;
}