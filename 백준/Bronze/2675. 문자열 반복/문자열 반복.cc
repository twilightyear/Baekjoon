#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
	int test_case,repeatation;
	list<string> my_list;
	string my_string;
	string tmp;

	cin >> test_case;

	for (int i=0;i<test_case;i++){
		tmp = "";
		cin >> repeatation >> my_string;

		for (int j=0;j<my_string.length();j++){
			for (int k=0;k<repeatation;k++){
				tmp += my_string[j];
			}
		}

		my_list.push_back(tmp);

	}

	for (string m : my_list){
		cout << m << endl;
	}

	return 0;
}