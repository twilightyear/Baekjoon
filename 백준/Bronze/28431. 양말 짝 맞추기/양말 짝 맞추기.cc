#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(10,0);
	for(int i=0;i<5;i++){
		int a;
		cin >> a;

		v[a]++;
	}

	for(int i=0;i<10;i++){
		if(v[i]%2==1){
			cout << i << '\n';
		}
	}

	return 0;
}