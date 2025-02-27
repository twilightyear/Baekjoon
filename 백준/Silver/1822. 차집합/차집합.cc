#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A_size,B_size;
	int val;
	vector<int> A,B,result;

	cin >> A_size >> B_size;

	for(int i=0;i<A_size;i++){
		cin >> val;
		A.emplace_back(val);
	}

	for(int i=0;i<B_size;i++){
		cin >> val;
		B.emplace_back(val);
	}

	sort(B.begin(),B.end());
	
	for(int i=0;i<A_size;i++){
		if(!binary_search(B.begin(),B.end(),A[i])){
			result.emplace_back(A[i]);
		}
	}

	sort(result.begin(),result.end());

	cout << result.size() << '\n';

	for(int i=0;i<result.size();i++){

		cout << result[i];

		if(i==result.size()-1){
			cout << '\n';
		} else {
			cout << ' ';
		}
	}



	return 0;
}