#include <iostream>
using namespace std;

int main(){
	long long count;
	long long total=1;

	cin >> count;

	if(count<0 or count>20){
		exit(0);
	}

	for (int i=1;i<=count;i++){
		total= total*i;
	}

	cout << total << endl;
	return 0;
}