#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main(){
	int n,m;
	string value;
	list<string> my_list;

	cin >> n >> m;

	for (int i=0;i<n;i++){
		cin >> value;
		reverse(value.begin(),value.end());
		my_list.push_back(value);
	}

	for (const string& k : my_list){
		cout << k << endl;
	}




	return 0;
}