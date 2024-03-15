#include <iostream>
using namespace std;

int main(){
	int n,m,x,y;

	cin >> n >> m;

	if (n > 100 or m > 100){
		exit(0);
	}

	int first_array[n][m];
	int second_array[n][m];

	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> first_array[i][j];
		}
	}

	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> second_array[i][j];
		}
	}

	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout << first_array[i][j] + second_array[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}