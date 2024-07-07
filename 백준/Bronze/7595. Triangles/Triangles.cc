#include <iostream>
using namespace std;

void draw(int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<i+1;j++){
			cout << '*'; 
		}
		cout << '\n';
	}
}

int main(){
	int n;

	while(1){
		cin >> n;
		if(n==0){
			break;
		}
		draw(n);
	}
	return 0;
}