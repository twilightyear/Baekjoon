#include <iostream>
#include <string>

using namespace std;


string result(int a, int b, int c){
	string value;

	if((a+b+c)>=55 && a>=10.5 && b>=7.5 && c>=12 ){
		value = "PASS";
	} else {
		value = "FAIL";
	}

	return value;
}

int main(){
	string num;
	int n;
	int a,b,c;
	cin >> n;

	for(int i=0;i<n;i++){

		cin >> num >> a >> b >> c;

		cout << num << " " << a+b+c << " " << result(a,b,c) << '\n';
	}

	return 0;
}