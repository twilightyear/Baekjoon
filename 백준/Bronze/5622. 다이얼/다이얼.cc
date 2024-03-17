#include <iostream>
#include <string>
using namespace std;

int main(){
	string my_string;
	int time=0;

	cin >> my_string;

	for (int i=0;i<my_string.length();i++){
		if (my_string[i] == 'A' or my_string[i] == 'B' or my_string[i] == 'C'){
			time += 3;
		} else if(my_string[i] == 'D' or my_string[i] == 'E' or my_string[i] == 'F' ){
			time += 4;
		} else if(my_string[i] == 'G' or my_string[i] == 'H' or my_string[i] == 'I' ){
			time += 5;
		} else if(my_string[i] == 'J' or my_string[i] == 'K' or my_string[i] == 'L' ){
			time += 6;
		} else if(my_string[i] == 'M' or my_string[i] == 'N' or my_string[i] == 'O' ){
			time += 7;
		} else if(my_string[i] == 'P' or my_string[i] == 'Q' or my_string[i] == 'R' or my_string[i] == 'S'){
			time += 8;
		} else if(my_string[i] == 'T' or my_string[i] == 'U' or my_string[i] == 'V' ){
			time += 9;
		} else if(my_string[i] == 'W' or my_string[i] == 'X' or my_string[i] == 'Y' or my_string[i] == 'Z'){
			time += 10;
		}
	}

	cout << time << endl;

	return 0;
}