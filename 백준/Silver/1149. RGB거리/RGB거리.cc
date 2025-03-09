#include <iostream>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int arr[1001][3]={0,};

	for(int i=0;i<n;i++){
		cin >> arr[i][0];
		cin >> arr[i][1];
		cin >> arr[i][2];
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<3;j++){
			if(j==0){
				arr[i][j] = min(arr[i][j]+arr[i-1][1],arr[i][j]+arr[i-1][2]);
			} else if(j==1){
				arr[i][j] = min(arr[i][j]+arr[i-1][0],arr[i][j]+arr[i-1][2]);
			} else if(j==2){
				arr[i][j] = min(arr[i][j]+arr[i-1][0],arr[i][j]+arr[i-1][1]);
			}
		}
	}

	cout << min(arr[n-1][0],min(arr[n-1][1],arr[n-1][2])) << '\n';
	
	return 0;
}