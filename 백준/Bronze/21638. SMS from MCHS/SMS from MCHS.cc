#include <iostream>
using namespace std;

int main(){
	int t1,t2,v1,v2;
	cin >> t1 >> v1 >> t2 >> v2;
	if(v2>=10 && t2<0){
		cout << "A storm warning for tomorrow! Be careful and stay home if possible!\n";
	} else if(t1>t2){
		cout << "MCHS warns! Low temperature is expected tomorrow.\n";
	} else if(v2>v1){
		cout << "MCHS warns! Strong wind is expected tomorrow.\n";
	} else {
		cout << "No message\n";
	}
	return 0;
}