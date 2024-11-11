#include <iostream>
#include <string>
using namespace std;

int main(){
	string line;
	cin >> line;

	int length = line.length();
	int col_cnt=0;
	int under_bar_cnt=0;
	int result=0;

	for(int i=0;i<line.length();i++){
		if(line[i]==':'){
			col_cnt++;
		} else if(line[i]=='_'){
			under_bar_cnt++;
		}
	}

	result = length + col_cnt + under_bar_cnt*5;

	cout << result << '\n';

}