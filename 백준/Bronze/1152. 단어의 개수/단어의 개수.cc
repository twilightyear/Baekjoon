#include <iostream>
#include <string>

using namespace std;

int main(){
	string sentence;
	int count = 1;
	int temp;

	getline(cin,sentence);

	for (int i=0;i<sentence.length();i++){
		if (sentence[i] == ' ' and sentence.length() != 0 and i != 0 and i != sentence.length()-1){ 
			count++;
		}
	}

	if (sentence.length() == 0){
		count = 0;
	}

	if (sentence.length() == 1){
		for (int i=0;i<sentence.length();i++){
			if (sentence[i] == ' '){
				count = 0;
			}
		}
	}

	cout << count << endl;
	return 0;
}