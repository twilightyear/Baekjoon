#include <iostream>
#include <cmath>
using namespace std;

int lower(double value){
	return value;
}

int main(){
	int n;
	cin >> n;
	cout << "The largest square has side length " << lower(sqrt(n)) << '.' << endl;
	return 0;
}