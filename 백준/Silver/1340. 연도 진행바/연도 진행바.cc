#include <iostream>
#include <string>
#include <iomanip>
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
	int y,m,d,hour,min;
	double total_min,current_min;
	string month,day,time;
	string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	cin >> month >> day >> y >> time;

	for(int i=0;i<12;i++){
		if(month==months[i]){
			m=(i+1);
			break;
		}
	}

	d = stoi(day.substr(0,day.size()-1));

	int colon_position = time.find(':');

	hour = stoi(time.substr(0,colon_position));
	min = stoi(time.substr(colon_position+1));

	if(check_leap_year(y)){
		total_min = 527040;
	} else {
		total_min = 525600;
	}

	current_min = (get_day(y,m,d)-1)*1440 + hour*60 + min;

	cout << fixed << setprecision(15) << (current_min/total_min)*100.0 << '\n';
	
	
	return 0;
}