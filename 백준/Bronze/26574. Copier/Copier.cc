#include <iostream>
#include <string>
using namespace std;

int main(){
	int cnt;
	string word;
	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> word;
		cout << word << ' ' << word << endl;
	}
	return 0;
}