#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	int total = 0;
	string word;
	cin >> n;
	cin >> word;
	for (int i=0;i<word.length();i++){
		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
			total++;
		}
	}

	cout << total << endl;
	return 0;
}