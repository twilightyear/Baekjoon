#include <iostream>
#include <string>
using namespace std;

bool contains(string value){
	for(int i=0;i<value.length();i++){
		if(value[i] =='7'){
			return true;
		}
	}
	return false;
}

int main(){
	int n;

	cin >> n;

	string n_s = to_string(n);


	if((n%7!=0) and (!contains(n_s))){
		cout << 0 << endl;
	} else if((n%7==0) and (!contains(n_s))){
		cout << 1 << endl;
	} else if((n%7!=0) and (contains(n_s))){
		cout << 2 << endl;
	} else if((n%7==0) and (contains(n_s))){
		cout << 3 << endl;
	}
	return 0;
}