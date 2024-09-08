#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string word = "";
	cin >> n;

	while(n-5>=0){
		n-=5;
		word+="V";
	}

	while(n-1>=0){
		n-=1;
		word+="I";
	}

	cout << word << '\n';
	return 0;
}