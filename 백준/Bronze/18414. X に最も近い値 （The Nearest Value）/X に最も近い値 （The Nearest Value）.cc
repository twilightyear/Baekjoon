#include <iostream>
using namespace std;

unsigned int abs(int a, int b){
	int result;
	result = a-b;

	if(result>=0){

	} else {
		result = b-a;
	}

	return result;
}

int main(){
	int X,L,R;
	unsigned int D;
	cin >> X >> L >> R;
	D=abs(L,X);
	int result=L;
	for(int i=L;i<=R;i++){
		if(abs(i,X)<D){
			D=abs(i,X);
			result = i;
		}
	}

	cout << result << '\n';
}