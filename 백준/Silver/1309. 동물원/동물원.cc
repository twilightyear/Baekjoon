#include <iostream>
using namespace std;

int main(){
	int n;
	int arr[100001]={0,};
	cin >> n;

	arr[0]=1;
	arr[1]=3;

	for(int i=2;i<=n;i++){
		arr[i] = (arr[i-1]*2 + arr[i-2])%9901;
	}

	cout << arr[n] << '\n';

	return 0;
}