#include <iostream>
#include <string>
using namespace std;

int main(){
	string word,doc;
	cin >> word >> doc;
	int patient_cnt = word.length()-1;
	int doc_cnt = doc.length()-1;

	if (patient_cnt>=doc_cnt){
		cout << "go" << endl;
	} else {
		cout << "no" << endl;
	}

	return 0;
}