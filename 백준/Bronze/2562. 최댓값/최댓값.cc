#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> my_list;
	int value,tmp=0;
	int max = 0;
	int max_index=0;

	for (int i = 0;i<9;i++){
		cin >> value;
		my_list.push_back(value);
		if (value >= max){
			max = value;
			max_index = i+1;
		}
	}

	cout << max << "\n" << max_index << endl;
	return 0;
}