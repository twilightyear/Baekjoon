#include <iostream>
using namespace std;

int main(){
	int limit,speed;
	cin >> limit >> speed;

	if (speed-limit>=31){
		cout << "You are speeding and your fine is $500." << endl;
	} else if (speed-limit<31 and speed-limit>20){
		cout << "You are speeding and your fine is $270." << endl;
	} else if (speed-limit<=20 and speed-limit>0){
		cout << "You are speeding and your fine is $100." << endl;
	} else {
		cout << "Congratulations, you are within the speed limit!" << endl;		
	}
	return 0;
}