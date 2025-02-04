#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;
	string S;

	cin >> N >> S;

	if(S[N-1]=='G'){
		for(int i=0;i<N-1;i++){
			cout << S[i];
		}
		cout << '\n';
	} else {
		cout << S << "G\n";
	}
	return 0;
}