#include <iostream>
using namespace std;

int main(){
	int n,k,result=0;
	cin >> n;

	for(int i=1;i<n-1;i++){
		for(int j=i;j<n-i;j++){
			k=n-i-j;

			if(j>k){
				break;
			}
			if(i+j>k){
				result++;
			}

		}
	}
	cout << result << '\n';
	return 0;
}