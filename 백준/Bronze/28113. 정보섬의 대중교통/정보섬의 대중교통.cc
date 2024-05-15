#include <iostream>
using namespace std;

int main(){
	int n,a,b;

	cin >> n >> a >> b;

	if (n>b){
		cout << "Bus" << endl;
	} else {
		if (b == a){
			cout << "Anything" << endl;
		} else if (b>a){
			cout << "Bus" << endl;
		} else {
			cout << "Subway" << endl;			
		}
	}
	return 0;
}