#include <iostream>
using namespace std;

int N,num,result;

void check(int num){
	if(num==1){
		return;
	} else {
		for(int i=2;i<num;i++){
			if(num%i==0){
				return;
			}
		}
		result++;
	}
}

int main(){
	cin >> N;

	for(int i=0;i<N;i++){
		cin >> num;
		check(num);
	}

	cout << result << '\n';
	return 0;
}