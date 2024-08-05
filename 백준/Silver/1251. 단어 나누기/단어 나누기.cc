#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	string word,a,b,c,result;
	vector<string> array;
	cin >> word;

	for(int i=1;i<word.length()-1;i++){
		for(int j=i+1;j<word.length();j++){

			a = word.substr(0,i);
			b = word.substr(i,j-i);
			c = word.substr(j);

			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			reverse(c.begin(),c.end());

			result = a+b+c;

			array.push_back(result);

		}

	}

	sort(array.begin(),array.end());

	cout << array[0] << '\n';

	return 0;
}