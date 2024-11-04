#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	char x;
	cin >> a >> x >> b >> x >> c;

	if((a+b)==c){
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}