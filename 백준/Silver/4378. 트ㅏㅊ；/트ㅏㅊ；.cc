#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string word;

	while(getline(cin,word)){

		for(int i=0;i<word.length();i++){
			if(word[i] == 'W'){
				word[i] = 'Q';
			} else if(word[i] == 'E'){
				word[i] = 'W';
			} else if(word[i] == 'R'){
				word[i] = 'E';
			} else if(word[i] == 'T'){
				word[i] = 'R';
			} else if(word[i] == 'Y'){
				word[i] = 'T';
			} else if(word[i] == 'U'){
				word[i] = 'Y';
			} else if(word[i] == 'I'){
				word[i] = 'U';
			} else if(word[i] == 'O'){
				word[i] = 'I';
			} else if(word[i] == 'P'){
				word[i] = 'O';
			} else if(word[i] == 'S'){
				word[i] = 'A';
			} else if(word[i] == 'D'){
				word[i] = 'S';
			} else if(word[i] == 'F'){
				word[i] = 'D';
			} else if(word[i] == 'G'){
				word[i] = 'F';
			} else if(word[i] == 'H'){
				word[i] = 'G';
			} else if(word[i] == 'J'){
				word[i] = 'H';
			} else if(word[i] == 'K'){
				word[i] = 'J';
			} else if(word[i] == 'L'){
				word[i] = 'K';
			} else if(word[i] == 'X'){
				word[i] = 'Z';
			} else if(word[i] == 'C'){
				word[i] = 'X';
			} else if(word[i] == 'V'){
				word[i] = 'C';
			} else if(word[i] == 'B'){
				word[i] = 'V';
			} else if(word[i] == 'N'){
				word[i] = 'B';
			} else if(word[i] == 'M'){
				word[i] = 'N';
			} else if(word[i] == '['){
				word[i] = 'P';
			} else if(word[i] == ']'){
				word[i] = '[';
			} else if(word[i] == '\\'){
				word[i] = ']';
			} else if(word[i] == ';'){
				word[i] = 'L';
			} else if(word[i] == '\''){
				word[i] = ';';
			} else if(word[i] == ','){
				word[i] = 'M';
			} else if(word[i] == '.'){
				word[i] = ',';
			} else if(word[i] == '/'){
				word[i] = '.';
			} else if(word[i] == '1'){
				word[i] = '`';
			} else if(word[i] == '2'){
				word[i] = '1';
			} else if(word[i] == '3'){
				word[i] = '2';
			} else if(word[i] == '4'){
				word[i] = '3';
			} else if(word[i] == '5'){
				word[i] = '4';
			} else if(word[i] == '6'){
				word[i] = '5';
			} else if(word[i] == '7'){
				word[i] = '6';
			} else if(word[i] == '8'){
				word[i] = '7';
			} else if(word[i] == '9'){
				word[i] = '8';
			} else if(word[i] == '0'){
				word[i] = '9';
			} else if(word[i] == '-'){
				word[i] = '0';
			} else if(word[i] == '='){
				word[i] = '-';
			}
		}
		cout << word << '\n';
	}

	return 0;
}