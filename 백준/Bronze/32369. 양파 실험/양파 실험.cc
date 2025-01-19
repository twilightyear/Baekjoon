#include <iostream>
using namespace std;

int main(){
	int N,A,B;
	int tmp;
	int a=1;
	int b=1;
	
	cin >> N >> A >> B;

	while(N>0){
		a+=A;
		b+=B;

		if(a<b){
			tmp = a;
			a = b;
			b = tmp;
		} else if(a==b){
			b--;
		}
		N--;
	}

	cout << a << ' ' << b << '\n';
	return 0;
}