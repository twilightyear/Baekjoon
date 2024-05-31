#include <iostream>
using namespace std;

int main(){
	int prize;
	cin >> prize;


	cout << prize*78/100 << ' ' << prize*80/100+prize*20/100*78/100 << endl;
	return 0;
}