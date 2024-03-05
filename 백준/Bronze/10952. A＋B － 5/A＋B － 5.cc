#include <iostream>
#include <list>
using namespace std;

int main(){
	int a,b;
	list<int> my_list;
	a = 5;
	b = 5;

	while(1)
	{
		cin >> a >> b;
		if (a == 0 and b==0){
			break;
		}
		if (a<=0 or b>=10){
			exit(0);
		}

		my_list.push_back(a+b);
	}

	for (int i : my_list){
		cout << i << endl;
	}

	return 0;
}