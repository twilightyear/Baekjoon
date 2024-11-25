#include <iostream>
#include <string>
using namespace std;

int main(){
	int N,result=0;
	string S;

	cin >> N >> S;

	for(int i=0;i<N;i++){
		if(S[i]=='j'){
			result+=2;
		} else if(S[i]=='o'){
			result+=1;
		} else if(S[i]=='i'){
			result+=2;
		} 
	}

	cout << result << '\n';
	return 0;
}