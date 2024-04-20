#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
	string word;
	int cnt;
	list<string> my_list;
	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> word;
		if (word == "Algorithm"){
			my_list.push_back("204");
		} else if (word == "DataAnalysis"){
			my_list.push_back("207");
		} else if (word == "ArtificialIntelligence"){
			my_list.push_back("302");
		} else if (word == "CyberSecurity"){
			my_list.push_back("B101");
		} else if (word == "Network"){
			my_list.push_back("303");
		} else if (word == "Startup"){
			my_list.push_back("501");
		} else if (word == "TestStrategy"){
			my_list.push_back("105");
		}
	}



	for (string i : my_list){
		cout << i << endl;
	}
	return 0;
}