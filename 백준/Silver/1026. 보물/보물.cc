#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool rule(int a,int b){
	return a>b;
}

int main(){
	int n,num;
	vector<int> array_A,array_B;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> num;
		array_A.push_back(num);
	}

	for(int i=0;i<n;i++){
		cin >> num;
		array_B.push_back(num);
	}

	sort(array_A.begin(),array_A.end());
	sort(array_B.begin(),array_B.end(),rule);

	int result = 0;

	for(int i=0;i<n;i++){
		result+=array_B[i]*array_A[i];
	}	

	cout << result << endl;

	return 0;
}