#include <iostream>
#include <string>
using namespace std;

int main(){
	string S,T;
	int result=0;
	int N;
	cin >> N >> S >> T;

	for(int i=0;i<N;i++){
		if(S[i]!=T[i]){
			result++;
		}
	}

	cout << result << '\n';

	return 0;
}