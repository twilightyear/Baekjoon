#include <iostream>
using namespace std;

int calculate(int num){
	int result = 0;
	for (int i=num;i>0;i--){
		result+=i;
	}

	return result;
}

int main(){
	int a;
	while(1){
		cin >> a;
		if (a!=0){
			cout << calculate(a) << endl;
		} else {
			break;
			exit(0);
		}
	}
	return 0;
}