#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string word;
	cin >> word;

	if (word.length()>100){
		exit(0);
	}

	vector<int> positions(26, -1);

	for (int i = 0; i < word.length(); i++){
		int l = word[i] - 'a';
		if (positions[l] == -1) {
			positions[l] = i;
		}
	}

	for (int j : positions){
		cout << j << ' ';
	}
	cout << endl;

	return 0;
}
