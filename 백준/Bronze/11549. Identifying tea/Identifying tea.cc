#include <iostream>
using namespace std;

int main(){
	int T,val,cnt=0;
	cin >> T;

	for(int i=0;i<5;i++){
		cin >> val;

		if(val==T){
			cnt++;
		}
	}
	

	cout << cnt << '\n';


	return 0;
}