#include <iostream>
using namespace std;

int main(){
	int N,M,x1,x2,y1,y2,result=0;
	int array[101][101]={0,};

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	cin >> N >> M;

	for(int i=0;i<N;i++){
		cin >> x1 >> y1 >> x2 >> y2;

		for(int j=x1;j<=x2;j++){
			for(int k=y1;k<=y2;k++){
				array[j][k]++;
			}
		}
	}


	for(int j=1;j<=100;j++){
		for(int k=1;k<=100;k++){
			if(array[j][k]>M){
				result++;
			}
		}
	}

	cout << result << '\n';
	return 0;
}