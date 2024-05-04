#include <iostream>
using namespace std;

int main(){
	int cnt;
	cin >> cnt;

	if (cnt == 1){
		cout << "SciComLove\n";
	} else if (cnt ==2){
		cout << "SciComLove\n" << "SciComLove\n";
	} else {
		exit(0);
	}
	return 0;
}