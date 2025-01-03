#include <iostream>
using namespace std;

void print_heart(int count){
	for(int i=0;i<count;i++){
		cout << " @@@   @@@  ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << "@   @ @   @ ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << "@    @    @ ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << "@         @ ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << " @       @  ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << "  @     @   ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << "   @   @    ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << "    @ @     ";
	}
	cout << '\n';
	for(int i=0;i<count;i++){
		cout << "     @      ";
	}
	cout << '\n';
}

int main(){
	int count;
	cin >> count;

	print_heart(count);
	return 0;
}