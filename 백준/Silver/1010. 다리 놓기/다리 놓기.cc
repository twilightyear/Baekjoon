#include <iostream>
using namespace std;


long long aCb(int a, int b){
	long long result=1;
	int k=1;
	for(int j=a;j>a-b;j--){
		result*=j;
		result/=k;
		k++;
	}
	return result;
}



int main(){
	int cnt,n,m;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> n >> m;
		cout << aCb(m,n) << endl;
	}

	return 0;
}