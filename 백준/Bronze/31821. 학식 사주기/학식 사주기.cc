#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N,price,M,item;
	int result=0;
	vector<int> A;

	cin >> N;


	for(int i=0;i<N;i++){
		cin >> price;
		A.push_back(price);
	}

	cin >> M;

	for(int i=0;i<M;i++){
		cin >> item;
		result+=A[item-1];
	}

	cout << result << '\n';


	return 0;
}