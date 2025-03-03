#include <iostream>
using namespace std;

int main(){
	int val;
	int result=0;
	
	while(1){
		cin >> val;
		if(val==-1){
			break;
		} else {
			result+=val;
		}
	}

	cout << result << '\n';
	return 0;
}