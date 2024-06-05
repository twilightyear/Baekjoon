#include <iostream>
#include <vector>
using namespace std;

int main(){
	int value;
	int is_ascending=1;
	int is_descending=1;

	vector<int> my_vector;

	for (int i=0;i<8;i++){
		cin >> value;
		my_vector.push_back(value);
	}

	for (int j=0;j<8;j++){
		if(my_vector[j] != j+1){
			is_ascending = 0;
		}
		if(my_vector[7-j] != j+1){
			is_descending = 0;
		}
	}

	if (is_ascending){
		cout << "ascending" << endl;
	} else if (is_descending){
		cout << "descending" << endl;
	} else {
		cout << "mixed" << endl;
	}

	return 0;
}