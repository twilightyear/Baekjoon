#include <iostream>
using namespace std;

int main(){
	bool result = true;
	int num[4];

	for(int i=0;i<4;i++){
		cin >> num[i];

		if((i==0 or i==3) and !(8<=num[i] && 9>= num[i])){
			result = false;
		}

		if(i==2 and num[i]!= num[i-1]){
			result = false;
		}
	}

	if(result){
		cout << "ignore\n";
	} else {
		cout << "answer\n";
	}

	return 0;
}