#include <iostream>
#include <string>
using namespace std;

int convert(const string& num){
	int total=0;
	for(int i=0;i<num.length();i++){
		total+=(int(num[i])-48);
	}
	return total;
}

int main(){
	string num;
	int count=0;

	cin >> num;

	
	

	while(num.length()>1){
		count++;
		num = to_string(convert(num));
	}

	cout << count << '\n';

	if(stoi(num)%3!=0){
		cout << "NO" << '\n';
	} else {
		cout << "YES" << '\n';
	}
	




	return 0;
}