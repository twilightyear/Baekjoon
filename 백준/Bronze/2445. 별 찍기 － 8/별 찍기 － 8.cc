#include <iostream>
using namespace std;

void print(int n){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout << '*';
		}
		for(int j=0;j<=n*2-i*2+1;j++){
			cout << ' ';
		}
		for(int j=0;j<=i;j++){
			cout << '*';
		}
		cout << '\n';
	}


	for(int i=0;i<=n*2+3;i++){
		cout << '*';
	}
	cout << '\n';


	for(int i=n;i>=0;i--){
		for(int j=0;j<=i;j++){
			cout << '*';
		}
		for(int j=0;j<=n*2-i*2+1;j++){
			cout << ' ';
		}
		for(int j=0;j<=i;j++){
			cout << '*';
		}
		cout << '\n';
	}
}



int main(){
	int n;
	cin >> n;

	n-=2;

	print(n);
	return 0;
}