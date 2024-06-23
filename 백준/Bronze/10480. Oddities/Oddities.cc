#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int cnt;
	int num;
	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> num;
		if(abs(num)%2==0){
			cout << num << " is even" << endl;
		} else {
			cout << num << " is odd" << endl;			
		}
	}
	return 0;
}