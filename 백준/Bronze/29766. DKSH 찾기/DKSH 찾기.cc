#include <iostream>
#include <string>
using namespace std;

int main(){
	int result=0;
	string word;
	cin >> word;

	for(int i=0;i<word.length()-3;i++){
		if(word.substr(i,4)=="DKSH"){
			result++;
			i+=3;
		}
	}

	cout << result << '\n';

	return 0;
}