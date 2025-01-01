#include <iostream>
using namespace std;

int main(){
	int N;
	int result=0;
	cin >> N;

	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(i*j==N){
				result = 1;
			}
		}
	}

	if(result==1){
		cout << 1 << '\n';
	} else {
		cout << 0 << '\n';
	}
	return 0;
}