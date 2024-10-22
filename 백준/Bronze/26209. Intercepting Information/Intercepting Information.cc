#include <iostream>
using namespace std;

int main(){
	int b;
	int state=0;
	for(int i=0;i<8;i++){
		cin >> b;
		if(b==9){
			state=1;
		}
	}
	if(state){
		cout << "F\n";
	} else {
		cout << "S\n";
	}
	return 0;
}