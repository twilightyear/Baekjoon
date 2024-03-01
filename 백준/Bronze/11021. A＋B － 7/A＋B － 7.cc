#include <iostream>
#include <list>
using namespace std;

int main(){
	int t;
	cin >> t;
	int a,b,cnt;
	cnt=1;
	list<int> my_list;
	list<int>::iterator iter = my_list.begin();

	for (int i=0;i<t;i++){
		a=0;
		b=0;
		cin >> a >> b;

		if (a>= 10 or a<=0 or b>=10 or b<=0){
			cout << "!" << endl;
			exit(0);
		}

		my_list.insert(iter,a+b);
	}



	for (list<int>::iterator i = my_list.begin();i != my_list.end();i++){
		{
			cout << "Case #" << cnt << ": "<< *i<< endl;
			cnt++;
		}
	}
	return 0;
}