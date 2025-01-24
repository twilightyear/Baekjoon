#include <iostream>
using namespace std;

int main(){
	int N,A,B,C,D;
	int result_A,result_C;
	cin >> N >> A >> B >> C >> D;
	
	if(N%A==0){
		result_A = (N/A)*B;
	} else if(N%A!=0){
		result_A = (N/A+1)*B;
	}

	if(N%C==0){
		result_C = (N/C)*D;
	} else if(N%C!=0){
		result_C = (N/C+1)*D;
	}

	if(result_A>=result_C){
		cout << result_C << '\n';
	} else {
		cout << result_A << '\n';
	}


	return 0;
}