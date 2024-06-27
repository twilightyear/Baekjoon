#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for (int k=0;k<n;k++){
		for (int i=n-k-1;i>0;i--){
			cout << ' ';
		}
		for (int j=0;j<2*k+1;j++){
			cout << '*';		
		}
		cout << '\n';
	}

	return 0;
}