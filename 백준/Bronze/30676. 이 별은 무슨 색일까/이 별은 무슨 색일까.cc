#include <iostream>
using namespace std;

int main(){
	int value;
	cin >> value;

	if (620 <= value and value <= 780){
		cout << "Red" << endl;
	} else if (590 <= value and value <= 620){
		cout << "Orange" << endl;
	} else if (570 <= value and value <= 590){
		cout << "Yellow" << endl;
	} else if (495 <= value and value <= 570){
		cout << "Green" << endl;
	} else if (450 <= value and value <= 495){
		cout << "Blue" << endl;
	} else if (425 <= value and value <= 450){
		cout << "Indigo" << endl;
	} else if (380 <= value and value <= 425){
		cout << "Violet" << endl;
	}
	return 0;
}