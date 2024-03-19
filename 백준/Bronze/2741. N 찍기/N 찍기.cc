#include <iostream>
using namespace std;

int main(){
	int cnt;

	cin >> cnt;

	if (cnt>100000 or cnt<1){
		exit(0);
	}

	for (int i=1;i<=cnt;i++){
		cout << i << '\n';
	}

	return 0;
}