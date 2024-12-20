#include <iostream>
using namespace std;

int main(){
	int T, N, F;
	cin >> T >> N;
	for(int i=0;i<N;i++){
		cin >> F;
		T-=F;
	}

	cout << "Padaeng_i ";

	if(T>0){
		cout << "Cry\n";
	} else {
		cout << "Happy\n";
	}
	return 0;
}