#include <iostream>
using namespace std;

int main(){
	int Sangduck,Jungduck,Haduck,Coke,Sprite,Food,Drink;

	cin >> Sangduck >> Jungduck >> Haduck >> Coke >> Sprite;

	if (Coke>=Sprite){
		Drink = Sprite;
	} else {
		Drink = Coke;
	}

	//S J H
	if (Sangduck >= Jungduck and Jungduck >= Haduck) {
		Food = Haduck;
	//S H J
	} else if (Sangduck >= Haduck and Haduck >= Jungduck) {
		Food = Jungduck;
	//J S H
	} else if (Jungduck >= Sangduck and Sangduck >= Haduck) {
		Food = Haduck;
	//J H S
	} else if (Jungduck >= Haduck and Haduck >= Sangduck) {
		Food = Sangduck;
	//H S J
	} else if (Haduck >= Sangduck and Sangduck >= Jungduck) {
		Food = Jungduck;
	//H J S
	} else if (Haduck >= Jungduck and Jungduck >= Sangduck) {
		Food = Sangduck;
	}

	cout << Food + Drink - 50 << endl;

	return 0;
}