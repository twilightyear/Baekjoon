#include <iostream>
using namespace std;

int main(){
	int N,M,K,i,j,x,y;
	int array[301][301];
	cin >> N >> M;

	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin >> array[i][j];
		}
	}

	cin >> K;

	int result;

	for(int k=0;k<K;k++){
		cin >> i >> j >> x >> y;

		result=0;

		for(int l=i;l<=x;l++){
			for(int m=j;m<=y;m++){
				result+=array[l-1][m-1];
			}
		}

		cout << result << '\n';
	}



}