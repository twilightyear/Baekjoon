#include <iostream>
using namespace std;

int main(){
	long long n,m,result;

	cin >> n>>m;

	if (n<-2000000000 or m<-2000000000 or n>2000000000 or m>2000000000){
		exit(0);
	}

	if((m-n)<0){
		result = n-m;
	} else if((m-n)>0){
		result = m-n;
	} else {
		result = 0;
	}

	cout << result << endl;

	return 0;
}