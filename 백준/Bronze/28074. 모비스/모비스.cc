#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	int M=0;
	int O=0;
	int B=0;
	int I=0;
	int S=0;

	cin >> word;

	for(int i=0;i<word.length();i++){
		if(word[i]=='M'){
			M=1;
		} else if(word[i]=='O'){
			O=1;
		} else if(word[i]=='B'){
			B=1;
		} else if(word[i]=='I'){
			I=1;
		} else if(word[i]=='S'){
			S=1;
		}
	}

	if(M==1 && O==1 && B==1 && I==1 && S==1){
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}