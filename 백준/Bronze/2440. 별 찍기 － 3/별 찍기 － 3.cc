#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int j=n;j>0;j--){
		for (int i=0;i<j;i++){
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}