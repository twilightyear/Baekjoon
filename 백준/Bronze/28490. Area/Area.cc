#include <iostream>
using namespace std;

int main(){
	int w[101];
	int h[101];

	int max=1;
	int n;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> h[i] >> w[i];
	}

	for(int i=0;i<n;i++){
		if(max<=h[i]*w[i]){
			max = h[i]*w[i];
		}
	}

	cout << max << '\n';


	return 0;
}