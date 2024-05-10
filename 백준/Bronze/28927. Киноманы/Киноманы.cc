#include <iostream>
using namespace std;

int main(){
	int max1,max2,max3,mel1,mel2,mel3;

	cin >> max1 >> max2 >> max3 >> mel1 >> mel2 >> mel3;
	if (max1*3+max2*20+max3*120 > mel1*3+mel2*20+mel3*120){
		cout << "Max" << endl;
	} else if (max1*3+max2*20+max3*120 < mel1*3+mel2*20+mel3*120){
		cout << "Mel" << endl;
	} else {
		cout << "Draw" << endl;
	}
	return 0;
}