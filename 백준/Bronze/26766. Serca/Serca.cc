#include <iostream>
using namespace std;

void draw(){
	cout << " @@@   @@@ \n";
	cout << "@   @ @   @\n";
	cout << "@    @    @\n";
	cout << "@         @\n";
	cout << " @       @ \n";
	cout << "  @     @  \n";
	cout << "   @   @   \n";
	cout << "    @ @    \n";
	cout << "     @     \n";
}

int main(){
	int cnt;
	cin >> cnt;

	if (cnt >100000 or cnt<1){
		exit(0);
	}

	for (int i=0;i<cnt;i++){
		draw();
	}
	return 0;
}