#include <iostream>
using namespace std;

int main(){

	int a,b,c;
	int price;
	cin >> a >> b >> c;

	if (a<1 or a>6 or b<1 or b>6 or c<1 or c>6){
		cout << " 조건 : [ a,b,c 는 1이상 6이하의 숫자 ] " << endl;
	}

	if (a == b and b == c){
		price = 10000 + a*1000;
	} else if ( a == b or a == c){
		price = 1000 + a*100;
	} else if ( b == c){
		price = 1000 + b*100;
	} else {
		if (a>b and a>c){
			price = a*100;
		} else if(b>a and b>c){
			price = b*100;
		} else if(c>a and c>b){
			price = c*100;
		}
	}

	cout << price << endl;

	return 0;
} 