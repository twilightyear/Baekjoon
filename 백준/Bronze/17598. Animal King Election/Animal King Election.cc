#include <iostream>
#include <string>
using namespace std;

int main(){
	string vote;
	int Lion=0;
	int Tiger=0;
	for(int i=0;i<9;i++){
		cin >> vote;
		if(vote=="Lion"){
			Lion++;
		} else if(vote=="Tiger"){
			Tiger++;
		}
	}

	if(Lion>Tiger){
		cout << "Lion\n";
	} else if(Lion<Tiger){
		cout << "Tiger\n";
	}
	return 0;
}