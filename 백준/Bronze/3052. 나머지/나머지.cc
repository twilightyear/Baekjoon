#include <iostream>
#include <list>
#include <string>
#include <set>
using namespace std;

int main(){
	list<int> my_list;
	int value;
	int count = 0;

	for (int i = 0;i<10;i++){
		cin >> value;
		my_list.push_back(value%42);
	}

	set<int> uniqueElements(my_list.begin(),my_list.end());

	cout << uniqueElements.size() << endl;

	return 0;
}