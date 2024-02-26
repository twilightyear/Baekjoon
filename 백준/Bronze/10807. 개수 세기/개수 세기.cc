#include <iostream>
using namespace std;

int main(){
	int cnt,num,find,find_cnt;
	find_cnt=0;
	char value[1000];
	cin >> cnt;
	if (cnt < 1 or cnt >100){
		exit(0);
	}

	for (int i=0;i<cnt;i++){
		cin >> num;
		value[i] = num;
	}

	cin >> find;

	for (int i=0;i<cnt;i++){
		if (value[i] == find){
			find_cnt++;
		}
	}

	cout << find_cnt << endl;




	return 0;
}