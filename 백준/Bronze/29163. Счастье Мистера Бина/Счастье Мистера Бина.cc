#include <iostream>
using namespace std;

int main(){
	int odd_count = 0;
	int even_count = 0;
	int cnt,val;
	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> val;
		if (val%2==0){
			even_count++;
		} else {
			odd_count++;
		}
	}

	if (even_count>odd_count){
		cout << "Happy" << endl;
	} else {
		cout << "Sad" << endl;
	}
	return 0;
}