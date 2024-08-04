#include <iostream>
#include <vector>
using namespace std;

int main(){

	int x,result=0;
	cin >> x;

	while(x>0){
		if(x%2==1){
			result++;
		}
		x /= 2;
	}

	cout << result << '\n';
}