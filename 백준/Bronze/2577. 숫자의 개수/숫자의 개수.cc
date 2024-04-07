#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
	int a,b,c;
	int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
	list<int> count;
	cin >> a >> b >> c;
	string result = to_string(a*b*c);

	for (int i=0;i<result.length();i++){
		if (result[i] == '0'){
			zero++;
		} else if (result[i] == '1'){
			one++;
		} else if (result[i] == '2'){
			two++;
		} else if (result[i] == '3'){
			three++;
		} else if (result[i] == '4'){
			four++;
		} else if (result[i] == '5'){
			five++;
		} else if (result[i] == '6'){
			six++;
		} else if (result[i] == '7'){
			seven++;
		} else if (result[i] == '8'){
			eight++;
		} else if (result[i] == '9'){
			nine++;
		}
	}

	cout << zero << endl;
	cout << one << endl;
	cout << two << endl;
	cout << three << endl;
	cout << four << endl;
	cout << five << endl;
	cout << six << endl;
	cout << seven << endl;
	cout << eight << endl;
	cout << nine << endl;
	return 0;
}