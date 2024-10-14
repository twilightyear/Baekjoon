#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	int final=0;
	string num;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		int result = stoi(num.substr(2));
		if(result<=90){
			final++;
		}
	}

	cout << final << '\n';
	return 0;
}