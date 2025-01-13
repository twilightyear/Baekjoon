#include <iostream>
using namespace std;

bool check_leap_year(int year){
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				return true;
			} else {
				return false;
			}
		} else {
			return true;
		}
	}
	return false;
}

int get_day(int y,int m, int d){
	int month_one[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int month_two[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int result=0;

	for(int i=1;i<y;i++){
		if(check_leap_year(i)){
			result+=366;
		} else {
			result+=365;
		}
	}

	for(int i=0;i<m-1;i++){
		if(check_leap_year(y)){
			result+=month_two[i];
		} else {
			result+=month_one[i];
		}
	}

	result+=d;

	return result;
}

int main(){
	int init;
	int y1,m1,d1,y2,m2,d2;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;

	if(y2-y1>1000 || (y2-y1==1000 && (m2>=m1 && d2>=d1))){
		cout << "gg" << '\n';
	} else {
		cout << "D-" << get_day(y2,m2,d2) - get_day(y1,m1,d1) << '\n';
	}

	return 0;
}