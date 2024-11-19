#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
	int N;
	int e_c=0;
	int o_c=0;
	cin >> N;

	string W;
	cin >> W;

	for(int i=0;i<N;i++){
		if((W[i]-'0')%2==0){
			e_c++;
		} else {
			o_c++;
		}
	}

	if(e_c>o_c){
		cout << 0 << '\n';
	} else if(o_c>e_c){
		cout << 1 << '\n';
	} else {
		cout << -1 << '\n';
	}

	return 0;
}