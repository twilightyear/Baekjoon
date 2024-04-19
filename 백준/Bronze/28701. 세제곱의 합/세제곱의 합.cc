#include <iostream>
using namespace std;

int main(){
	int x;
	int tmp=0;
	cin >> x;


	for (int i=1;i<=x;i++){
		tmp+=i;
	}
	cout << tmp << endl;
	cout << tmp*tmp << endl;

	tmp =0;

	for (int i=1;i<=x;i++){
		tmp+=(i*i*i);
	}
	cout << tmp << endl;
	return 0;
}