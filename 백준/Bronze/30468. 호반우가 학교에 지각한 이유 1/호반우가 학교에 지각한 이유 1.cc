#include <iostream>
using namespace std;


int main(){
	int str,dex,ints,luk,n;
	cin >> str >> dex >> ints >> luk >> n;
	int mean = (str+dex+ints+luk)/4;

	if (n*4-(str+dex+ints+luk) > 0){
		cout << n*4-(str+dex+ints+luk) << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}