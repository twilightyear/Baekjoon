#include <iostream>
using namespace std;

int cal(int a,int b){
	int result;
	result = (a+b)*(a-b);
	return result;
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << cal(a,b) << endl;
}