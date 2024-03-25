#include <iostream>
using namespace std;

int main(){
	int a,b;
	while(1){
		cin >> a >> b;
		if (a==0 and b==0){
			break;
			exit(0);
		} else {
			if (a>b){
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
	return 0;
}
