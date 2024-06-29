#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	n--;

	for (int k=n;k>=0;k--){
		for (int i=n-k;i>0;i--){
			cout << ' ';
		}
		for (int j=0;j<2*k+1;j++){
			cout << '*';		
		}
		cout << '\n';
	}

	return 0;
}