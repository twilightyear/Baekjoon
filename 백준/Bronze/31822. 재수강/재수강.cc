#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	string data;
	int count,result=0;
	cin >> word >> count;

	for(int i=0;i<count;i++){
		cin >> data;
		if((data[0] == word[0]) and (data[1] == word[1]) and (data[2] == word[2]) and (data[3] == word[3]) and (data[4] == word[4])){
			result++;
		}
	}


	cout << result << '\n';

	return 0;
}