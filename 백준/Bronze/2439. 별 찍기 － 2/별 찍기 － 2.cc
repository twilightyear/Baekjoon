#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for (int k=n;k>0;k--){

		for(int i = k-1 ; i > 0 ; i--){
			cout << " ";
		}

		for(int j=0 ; j<n-k+1 ; j++){
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
