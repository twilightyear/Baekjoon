#include <iostream>
#include <list>
using namespace std;

int main(){
	int cnt,a,b;
	list<string> my_list;

	cin >> cnt;

	for (int i =1;i<=cnt;i++){

		cin >> a >> b;

		if(a<=0 or b>=10){
			exit(0);
		}

		my_list.push_back("Case #" + to_string(i) + ": " + to_string(a) + " + " + to_string(b) + " = " + to_string(a+b));

	}

	for (string element : my_list){
		cout << element << endl;
	}

	return 0;
}
