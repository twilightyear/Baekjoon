#include <string>
#include <iostream>
using namespace std;

int main(){
	string word;
	int num=0;
	while(1){
		num++;
		getline(cin,word);
		if(word == "0"){
			break;
		} else {
			cout << "Case " << num << ": Sorting... done!"<< endl;
		}
	}
	return 0;
}