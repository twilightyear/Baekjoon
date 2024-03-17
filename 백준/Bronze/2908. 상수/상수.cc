#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b,c,d;
	int result;
	cin >> a >> b;

	//convert
	c = string(1,a[2]) + a[1] + a[0];
	d = string(1,b[2]) + b[1] + b[0];

	if (stoi(c)>stoi(d)){
		result = stoi(c);
	} else{
		result = stoi(d);
	}

	cout << result << endl;

	return 0;
}