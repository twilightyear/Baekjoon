#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,val;
	int maxn = 0;
	cin >> n;
	int arr[501][501]={0,};

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin >> val;
			arr[i][j] = val;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0){
				arr[i][j] = arr[i-1][0] + arr[i][j];
			} else if(j==i){
				arr[i][j] = arr[i-1][j-1] + arr[i][j];
			} else {
				arr[i][j] = max(arr[i-1][j-1] + arr[i][j], arr[i-1][j]+arr[i][j]);
			}

			maxn = max(maxn, arr[i][j]);
		}
	}

	cout << maxn << '\n';

	return 0;
}