#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	int violation = 0;

	for(int i=0;i<5;i++){
		cin >> m;
		if(m%10==n%10){
			violation++;
		}
	}

	cout << violation << '\n';
	return 0;
}