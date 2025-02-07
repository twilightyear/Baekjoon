#include <iostream>
using namespace std;

void check(){
	int a,b,c;
	cin >> a >> b >> c;

	if((a<=b && b<=c) || (c<=b && b<=a)){
		cout << "Ordered\n";
	} else {
		cout << "Unordered\n";
	}
}

int main(){
	int n;
	cin >> n;

	for(int i=0;i<n;i++){
		if(i==0){
			cout << "Gnomes:\n";
		}

		check();
	}

	return 0;
}