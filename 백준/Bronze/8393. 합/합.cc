#include <iostream>
using namespace std;

int main(){
	int cnt;
	int total = 0;

	cin >> cnt;
	int cnt_per = cnt;

	if (cnt<1 or cnt>100000){
		exit(0);
	}


	for (int i=0;i<cnt_per;i++){
		total+=cnt;
		cnt--;
	}

	cout << total << endl;
	
	return 0;
}