#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	
	getline(cin,word);

	int end_l = word.length()-1;
	int begin_l = 0;

	int cnt=0;

	for(int i=1;i<word.length()-1;i++){
		if(word[i]!=' '){
			cnt++;
		}
	}

	if(word[begin_l]=='\"' && word[end_l]=='\"' && cnt>0){
		for(int i=1;i<word.length()-1;i++){
			cout << word[i];
		}
		cout << '\n';
	} else {
		cout << "CE\n";
	}

	return 0;
}