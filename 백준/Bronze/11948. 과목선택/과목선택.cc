#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int A,B,C,D,E,F;

	int result=0;

	cin >> A >> B >> C >> D >> E >> F;

	result+=(A+B+C+D - min(min(A,B),min(C,D)));

	result+=(max(E,F));

	cout << result << '\n';
	return 0;
}