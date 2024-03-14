#include <iostream>
#include <list>
using namespace std;

int main(){
	int n,m;
	int f,s;
	int tmp;

	cin >> n >> m;


	list<int> my_list;

	//기본 바구니 만들기
	for (int i = 0;i<n;i++){
		my_list.push_back(i+1);
	}

	//바꾸기 실행
	for (int j = 0;j<m;j++){
		cin >> f >> s;
		f--;
		s--;
		auto it_f = my_list.begin();
		advance(it_f,f);
		auto it_s = my_list.begin();
		advance(it_s,s);
		tmp = *it_f;
		*it_f = *it_s;
		*it_s = tmp;
	}

	for (int i : my_list){
		cout << i << " ";
	}

	cout << endl;


	return 0;
}