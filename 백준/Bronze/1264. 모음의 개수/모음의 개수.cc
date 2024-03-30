#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
	int cnt;
	string word;
	list<int> my_list;

	while(1){
		getline(cin, word);
		cnt=0;
		if (word[0] == '#'){
			break;
		} else {
			for (int i=0;i<word.length();i++){
				if (word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o' or word[i] == 'u' or word[i] == 'A' or word[i] == 'E' or word[i] == 'I' or word[i] == 'O' or word[i] == 'U'){
					cnt++;
				} 
			}
			my_list.push_back(cnt);
		}
	}

	for (int i : my_list){
		cout << i << endl;
	}
	return 0;
}