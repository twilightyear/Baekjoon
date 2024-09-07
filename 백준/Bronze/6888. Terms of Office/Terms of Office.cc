#include <iostream>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;

	for(int i=x;i<=y;i++){
		if((i-x)%60==0){
			cout << "All positions change in year " << i << '\n';
		}
	}
	return 0;
}