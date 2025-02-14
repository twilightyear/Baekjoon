#include <iostream>
using namespace std;

int main(){
	int l,a,b,c,d;
	cin >> l >> a >> b >> c >> d;

	int a1 = a/c;
	a = a%c;

	if(a>0){
		a1+=1;
	}

	int a2 = b/d;
	b = b%d;

	if(b>0){
		a2+=1;
	}

	if(a1<a2){
		cout << l-a2 << '\n';
	} else {
		cout << l-a1 << '\n';
	}
	
	return 0;
}