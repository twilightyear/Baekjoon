#include <iostream>
#include <string>
using namespace std;

string lower(string name){
	string result = name;

	for(int i=0;i<name.length();i++){
		if((int)name[i]>=65 and (int)name[i]<=90){
			result[i] = (char)((int)name[i]+32);
		}
	}

	return result;
}

int main(){
	string name;
	int cnt;

	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> name;
		cout << lower(name) << '\n';
	}


	return 0;
}