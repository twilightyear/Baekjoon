#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	int cnt=0;
	while(getline(cin,word)){
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}