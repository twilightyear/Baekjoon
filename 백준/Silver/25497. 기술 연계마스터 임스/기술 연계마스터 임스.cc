#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n,cnt=0;
	char m;
	stack<char> LR;
	stack<char> SK;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> m;
		if(m=='1' || m=='2' || m=='3' || m=='4' || m=='5' || m=='6' || m=='7' || m=='8' || m=='9'){
			cnt++;
		} else if(m=='L'){
			LR.push('L');
		} else if(m=='R'){
			if(LR.empty()){
				break;
			} else {
				LR.pop();
				cnt++;
			}
		} else if(m=='S'){
			SK.push('S');
		} else if(m=='K'){
			if(SK.empty()){
				break;
			} else {
				SK.pop();
				cnt++;
			}
		} else {
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}