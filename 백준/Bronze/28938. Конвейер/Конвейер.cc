#include <iostream>
using namespace std;

int main(){
	int cnt;
	int tmp;
	int total=0;
	cin >> cnt;
	for (int i=0;i<cnt;i++){
		cin >> tmp;
		total+=tmp;
	}

	if (total==0){
		cout << "Stay" << endl;
	} else if (total>0){
		cout << "Right" << endl;
	} else if (total<0){
		cout << "Left" << endl;
	}
	return 0;
}