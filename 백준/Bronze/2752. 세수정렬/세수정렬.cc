#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main(){
	list<int> my_list;
	int a,b,c;
	cin >> a >> b >> c;

	my_list.push_back(a);
	my_list.push_back(b);
	my_list.push_back(c);

	my_list.sort();

	for (int i : my_list){
		cout << i << ' ';
	}

	cout << endl;
	return 0;
}