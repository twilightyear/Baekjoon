#include <iostream>
using namespace std;

int main(){
	int cnt;
	int a,b;

	cin >> cnt;
	for(int i=0;i<cnt;i++){
		cin >> a >> b;
		if(a>=b){
			cout << "MMM BRAINS" << '\n';
		} else {
			cout << "NO BRAINS" << '\n';
		}
	}
	return 0;
}