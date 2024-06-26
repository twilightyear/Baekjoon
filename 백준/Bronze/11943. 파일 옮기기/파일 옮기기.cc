#include <iostream>
using namespace std;

int max(int a, int b){
	if(a>=b){
		return a;
	} else {
		return b;
	}
}

int min(int a, int b){
	if(a<=b){
		return a;
	} else {
		return b;
	}
}

int main(){
	int a_apple,b_apple,a_orange,b_orange;
	cin >> a_apple >> a_orange >> b_apple >> b_orange;

	cout << min(a_apple+b_orange,a_orange+b_apple)<< endl;
	


	return 0;
}