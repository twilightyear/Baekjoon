#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool rule(string a, string b){
	if(a.length() == b.length()){
		return a<b;
	} else {
		return a.length() < b.length();
	}
}

int main(){
	string word;
	vector<string> array;
	int cnt;
	bool valid;
	cin >> cnt;

	for (int i=0;i<cnt;i++){
		valid=true;
		cin >> word;
		if(array.size()!=0){
			for(int j=0;j<array.size();j++){
				if(word==array[j]){
					valid=false;
				}
			}
		}
		if(valid){
			array.push_back(word);
		}
	}

	sort(array.begin(),array.end(),rule);

	for (int i=0;i<array.size();i++){
		cout << array[i] << '\n';
	}

	return 0;
}