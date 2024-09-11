#include <iostream>
#include <string>
using namespace std;

int main(){

	int a,b,c,max;
	while(1){
		string result = "wrong";
		cin >> a >> b >> c;

		if(a==0 && b==0 && c==0){
			break;
		}

		//abc
		if(a >= b && b >= c){
			if(a*a == b*b+c*c){
				result = "right";
			}
		//acb
		} else if(a >= c && c >= b){
			if(a*a == c*c+b*b){
				result = "right";
			}
		//bac
		} else if(b >= a && a >= c){
			if(b*b == a*a+c*c){
				result = "right";
			}
		//bca
		} else if(b >= c && c >= a){
			if(b*b == c*c+a*a){
				result = "right";
			}
		//cab
		} else if(c >= a && a >= b){
			if(c*c == a*a+b*b){
				result = "right";
			}
		//cba
		} else {
			if(c*c == b*b+a*a){
				result = "right";
			}
		}

		cout << result << '\n';


	}
	return 0;
}