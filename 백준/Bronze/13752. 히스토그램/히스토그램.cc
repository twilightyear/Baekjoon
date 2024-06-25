#include <iostream>
using namespace std;

void draw(int cnt){
	for(int i=0;i<cnt;i++){
		cout << '=';
	}
	cout << '\n';
} 

int main(){
	int count,length;
	cin >> count;

	for (int i=0;i<count;i++){
		cin >> length;
		draw(length);
	}

	return 0;
}