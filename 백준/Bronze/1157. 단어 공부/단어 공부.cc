#include <iostream>
#include <string>
#include <vector>
using namespace std;

char upper(char letter){
	if (97<=letter && letter <=122){
		return letter - 32;
	} else if (65<=letter and letter <= 90){
		return letter;
	}
	return letter;
}

int main(){
	int array[27] = {0,};
	string word;
	cin >> word;

	for(int i=0;i<word.length();i++){
		word[i] = upper((char)word[i]);
	}


	for(int i=0;i<word.length();i++){
		array[(int)word[i]-65]++;
	}


	int max=0;
	int max_index=0;
	int error=0;

	for(int i=0;i<27;i++){
		if(array[i]>max){
			max = array[i];
			max_index = i;
		}
	}

	for(int i=0;i<27;i++){
		if(max==array[i]){
			error++;
		}
	}

	if(error==1){
		cout << (char)(max_index+65) << '\n';
	} else {
		cout << '?' << '\n';
	}




	return 0;
}