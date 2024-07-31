#include <iostream>
using namespace std;

int main(){
	int n,result = 0;
	int i = 5;
	
	cin >> n;

	while(i<=n){
		result+=(n/i);
		i*=5;
	}

	cout << result << endl;

}