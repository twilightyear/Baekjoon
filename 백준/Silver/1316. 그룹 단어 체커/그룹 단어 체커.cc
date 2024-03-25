#include <iostream>
#include <string>
#include <set>
using namespace std;

//그룹단어면 1 반환 아니면 0 반환
int check(string word){
	set<char> validation;

	for(int i=0;i<word.length();i++){
		if (validation.count(word[i]) && word[i] != word[i - 1]){
			return 0;
		}
		validation.insert(word[i]);
	}
	return 1;
}


int main(){

	//선언
	int count;
	int result=0;
	string word;

	//입력
	cin >> count;

	//count 만큼 반복
	for (int i=0;i<count;i++){
		cin >> word;
		if (check(word)==1){
			result++;
		}
	}

	//결과 출력
	cout << result << endl;


	return 0;
}