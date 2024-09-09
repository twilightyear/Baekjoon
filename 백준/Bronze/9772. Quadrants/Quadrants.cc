#include <iostream>
using namespace std;

int main(){
	double x,y;
	while(1){
		cin >> x >> y;

		if(x==0 and y==0){
			cout << "AXIS" << '\n';
			break;
		}

		if(x==0 or y==0){
			cout << "AXIS" << '\n';
		} else if(x>0 and y>0){
			cout << "Q1" << '\n';
		} else if(x>0 and y<0){
			cout << "Q4" << '\n';
		} else if(x<0 and y>0){
			cout << "Q2" << '\n';
		} else if(x<0 and y<0){
			cout << "Q3" << '\n';
		}
	}



	return 0;
}