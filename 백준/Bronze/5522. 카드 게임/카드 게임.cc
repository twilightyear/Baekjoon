#include <iostream>
using namespace std;

int main(){
	int n,tmp;
	n=0;


	for(int i=0;i<5;i++){
		cin >> tmp;
		n+=tmp;
	}

	cout << n << endl;
	return 0;
}