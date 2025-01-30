#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int N;
	string val;
	cin >> N;
	int D=0;
	int P=0;

	for(int i=0;i<N;i++){
		cin >> val;

		if(abs(D-P)==2){
			break;
		}
		if(val=="D"){
			D++;
		}else if(val=="P"){
			P++;
		}
	}

	cout << D << ":" << P << '\n';
	return 0;
}