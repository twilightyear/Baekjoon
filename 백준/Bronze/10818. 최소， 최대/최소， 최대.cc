#include <iostream>
#include <list>
using namespace std;

int main(){
	int cnt,value;
	int tmp=-1000000,l_tmp=1000000;

	list<int> my_list;

	cin >> cnt;

	if (cnt < 1 or cnt >1000000){
		exit(0);
	}

	for (int i=0;i<cnt;i++){
		cin >> value;

		if (value >1000000 or value < -1000000){
			exit(0);
		}

		my_list.push_back(value);
	}

	for(int i : my_list){
		if (i>=tmp){
			tmp = i;
		}
		if (i<=l_tmp){
			l_tmp = i;
		}
	}

	cout << l_tmp << " " << tmp << endl;

	return 0;
}