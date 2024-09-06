#include <iostream>
using namespace std;

int main(){
	int d;
	int state=0;
	for(int i=0;i<10;i++){
		cin >> d;

		if(d==1){
			state+=1;
		} else if(d==2){
			state+=2;
		} else if(d==3){
			state+=3;
		}


	}


	int now = state%4;

	if(now == 0){
		cout << "N" << '\n';
	} else if(now == 1){
		cout << "E" << '\n';
	} else if(now == 2){
		cout << "S" << '\n';
	} else if(now == 3){
		cout << "W" << '\n';
	}
	return 0;
}