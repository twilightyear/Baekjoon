#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	if (n>100 or n<1){
		exit(0);
	}

	n -= 1;

	for (int i=n;i>=0;i--){
		for (int j=i;j>0;j--){
			cout << " ";
		}
		for (int k=1;k<(n-i+1)*2;k++){
			cout << "*";
		}
		cout << endl;
	}

	for (int i=0;i<=n;i++){
		for (int j=0;j<=i;j++){
			cout << " ";
		}
		for (int k=1;k<(n-i)*2;k++){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}