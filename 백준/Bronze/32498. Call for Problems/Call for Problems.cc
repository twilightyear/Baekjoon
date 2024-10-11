#include <iostream>
using namespace std;

int main(){
		
	int n,d;
	cin >> n;
	int result=0;
	
	for(int i=0;i<n;i++) {
		cin >> d;
		if(d%2!=0) {
			result++;
		}	
	}
	cout << result << '\n';
}
