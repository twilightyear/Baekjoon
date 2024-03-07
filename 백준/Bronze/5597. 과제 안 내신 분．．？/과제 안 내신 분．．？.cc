#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> data;
	int member;
	for (int i=1;i<=30;i++){
		data.push_back(i);
	}

	for (int i=1;i<=28;i++){
		cin >> member;
		if (member < 1 or member > 30){
			exit(0);
		}
		data.remove(member);
	}

	for (int i : data){
		cout << i << endl;
	}

	return 0;
}
