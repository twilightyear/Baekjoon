#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;

	int consecutive_max=1;
	int consecutive_cnt=1;

	string val;
	cin >> N;

	cin >> val;

	for(int i=1;i<N;i++){
		if(val[i]==val[i-1] && val[i]=='o'){
			consecutive_cnt++;
		} else {
			if(consecutive_cnt>consecutive_max){
				consecutive_max = consecutive_cnt;
			}
			consecutive_cnt=1;
		}
	}
	if(consecutive_cnt>consecutive_max){
		consecutive_max = consecutive_cnt;
	}

	if(consecutive_max>=3){
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	return 0;
}