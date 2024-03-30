#include <iostream>
using namespace std;

int main(){
	int x,y,w,h,result;
	cin >> x >> y >> w >> h;

	result = min(min(x,w-x),min(y,h-y));
	
	cout << result << endl;

	return 0;
}