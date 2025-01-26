#include <iostream>
#include <string>
using namespace std;

int main(){
	int result_1 = 0;
	int result_2 = 0;
	string word;
	cin >> word;

	for(int i=0;i<word.length();i++){
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
			result_1++;
		}
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='y'){
			result_2++;
		}
	}

	cout << result_1 << ' ' << result_2 << '\n';

	return 0;
}