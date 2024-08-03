#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	string word;
	list<int> my_list;
	cin >> word;

	for (int i=0;i<word.size();i++){
		my_list.push_back(word[i]-48);
	}

	vector<int> my_vector(my_list.begin(),my_list.end());

	sort(my_vector.begin(),my_vector.end(),greater<int>());

	for (int k : my_vector){
		cout << k;
	}

	cout << endl;
	

	return 0;
}