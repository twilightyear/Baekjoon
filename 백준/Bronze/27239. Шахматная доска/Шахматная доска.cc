#include <iostream>
using namespace std;

int main(){
	int n;
	string word = "";
	cin >> n;

	if(n%8==1){
		word+="a";
	} else if(n%8==2){
		word+="b";
	} else if(n%8==3){
		word+="c";
	} else if(n%8==4){
		word+="d";
	} else if(n%8==5){
		word+="e";
	} else if(n%8==6){
		word+="f";
	} else if(n%8==7){
		word+="g";
	} else if(n%8==0){
		word+="h";
	}

	if(((n-1)/8)+1==1){
		word+="1";
	} else if(((n-1)/8)+1==2){
		word+="2";
	} else if(((n-1)/8)+1==3){
		word+="3";
	} else if(((n-1)/8)+1==4){
		word+="4";
	} else if(((n-1)/8)+1==5){
		word+="5";
	} else if(((n-1)/8)+1==6){
		word+="6";
	} else if(((n-1)/8)+1==7){
		word+="7";
	} else if(((n-1)/8)+1==8){
		word+="8";
	}

	cout << word << '\n';

	return 0;
}