#include <iostream>
#include <string>
using namespace std;

int main(){
	int cnt,t;
	string result;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> t;
		result = "Round 1";
		if(t<=25){
			result = "World Finals";
		} else if(t<=1000){
			result = "Round 3";
		} else if(t<=4500){
			result = "Round 2";
		}

		cout << "Case #" << i+1 << ": " << result << '\n';
	}
	return 0;
}