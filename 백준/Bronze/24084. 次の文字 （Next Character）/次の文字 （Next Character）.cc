#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;
	string S;
	cin >> N >> S;

	for(int i=0;i<N;i++){
		if(S[i+1]=='J'){
			cout << S[i] << '\n';
		}
	}
	return 0;
}