#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<string> v;
	string mbti,people;
	int n,cnt=0;

	cin >> mbti;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> people;
		v.push_back(people);
	}

	for(int i=0;i<n;i++){
		if(v[i] == mbti){
			cnt++;
		}
	}

	cout << cnt << '\n';


	return 0;
}