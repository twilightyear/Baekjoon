#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int arr[10001]={0,};

	int N,val;
	cin >> N;

	for(int i=0;i<N;i++){
		cin >> val;
		arr[val]++;
	}

	for(int i=1;i<10001;i++){
		if(arr[i]>0){
			for(int j=0;j<arr[i];j++){
				cout << i << '\n';
			}
		}
	}

	return 0;
}