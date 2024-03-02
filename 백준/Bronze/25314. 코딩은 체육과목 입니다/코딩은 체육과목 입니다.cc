#include <iostream>
using namespace std;

int main(){
	int byte;
	cin >> byte;

	if (byte > 1000 or byte < 4 and byte % 4 != 0){
		exit(0);
	}

	int cnt = byte/4;

	for (int i = 0;i<cnt;i++){
		if (i == 0){
			cout << "long";
		} else {
			cout << " long";
		}
	}

	cout << " int" << endl;
	return 0;
}