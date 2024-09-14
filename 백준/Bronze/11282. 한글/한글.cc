#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;
	string word;
	cin >> N;

	word+=((N+3071)/4096+234);
	word+=((N+3071)/64%64+128);
	word+=((N+3071)%64+128);

	cout << word << '\n';
	return 0;
}