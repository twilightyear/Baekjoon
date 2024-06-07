#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
	string word;
	string a;
	int b,c;
	int running = 1;
	list<string> my_list;

	while(running){
		cin >> a >> b >> c;
		if (a == "#" and b == 0 and c == 0){
			running = 0;
			break;
		} else {
			if (b>17 or c>=80){
				my_list.push_back(a + " Senior");
			} else {
				my_list.push_back(a + " Junior");
			}	
		}


	}

	for ( string j : my_list){
		cout << j << endl;
	}


	
	return 0;
}