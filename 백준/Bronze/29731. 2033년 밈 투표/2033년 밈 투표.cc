#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt;
	int pass;
	int hacked=0;
	string word;
	cin >> cnt; cin.ignore();

	for (int i = 0;i<cnt;++i){
		getline(cin,word);
		if (word == "Never gonna give you up"){
			pass=0;
		} else if (word == "Never gonna let you down"){
			pass=0;
		} else if (word == "Never gonna run around and desert you"){
			pass=0;			
		} else if (word == "Never gonna make you cry"){
			pass=0;			
		} else if (word == "Never gonna say goodbye"){
			pass=0;		
		} else if (word == "Never gonna tell a lie and hurt you"){
			pass=0;			
		} else if (word == "Never gonna stop"){
			pass=0;			
		} else {
			hacked=1;
		}
	}

	if (hacked == 1){
		cout << "Yes" << endl;
	} else if (hacked == 0){
		cout << "No" << endl;		
	}

	return 0;
}