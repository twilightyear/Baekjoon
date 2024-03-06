#include <iostream>
#include <list>
using namespace std;

int main(){

	//입출력의 연결을 끊는다.
	cin.tie(NULL);

	//표준 stream의 동기화를 끊는다.
	ios::sync_with_stdio(false);

	int n,a,b;
	list<int> my_list;

	cin >> n;

	if (n>1000000){
		exit(0);
	}

	for (int i = 0;i<n;i++){

		cin >> a >> b;

		if (a>1000 or b>1000 or a<1 or b<1){
			exit(0);
		}

		my_list.push_back(a+b);

	}

	for (int j : my_list){
		cout << j << "\n";
	}

	return 0;
}