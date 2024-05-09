#include <iostream>
#include <cmath>
#include <list>
using namespace std;

int main(){
	int cnt;
	list<int> my_result;
	double x1,y1,r1;
	double x2,y2,r2;

	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		if (r1 == r2 && x1 == x2 && y1 == y2){
			my_result.push_back(-1);
		} else if (abs(r2-r1) < d && d < r2+r1){
			my_result.push_back(2);
			//cout << 2 << '\n';
		} else if (r1+r2==d || abs(r2-r1) ==d){
			my_result.push_back(1);
			//cout <<  1 << '\n';
		} else if (r1+r2 < d || abs(r2-r1) > d || d == 0){
			my_result.push_back(0);
			//cout << 0 << '\n';
		}
	}


	for (int i : my_result){
		cout << i << '\n';
	}
	return 0;
}