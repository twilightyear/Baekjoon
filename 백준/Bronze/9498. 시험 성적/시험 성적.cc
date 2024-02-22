#include <iostream>
using namespace std;

int main(){
	int score;
	cin >> score;
	if (100>=score and score>=90){
		cout << "A" << endl;
	} else if (89>=score and score>=80){
		cout << "B" << endl;
	} else if (79>=score and score>=70){
		cout << "C" << endl;
	} else if (69>=score and score>=60){
		cout << "D" << endl;
	} else if (59>=score and score>=0){
		cout << "F" << endl;
	} else {
		cout << "옮지 않은 점수입니다." << endl;		
	}
	return 0;
}