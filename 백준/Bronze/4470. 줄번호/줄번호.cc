#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){

	int cnt;
	string value,my_data;
	list<string> data;

	cin >> cnt;
	cin.ignore();

	for (int i=0;i<cnt;i++){

		getline(cin,value);

		my_data = to_string(i+1) + ". " + value;

		data.push_back(my_data);
	}

	for (string j : data){
		cout << j << endl;
	}
	
}